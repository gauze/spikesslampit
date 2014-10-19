#include <vectrex.h>
#include "shapes.h"

#define MAX_BRIGHTNESS (0x7f)

typedef char bool;
#define TRUE 1
#define FALSE 0
/* levelinf.h needs TRUE FALSE */
#include "levelinf.h"

/* scoring defines */
#define EXTRA_DECOY_SCORE 500
#define ROD_SCORE 50
#define BLINK182_FAN 0
#define POSITRON_SCORE 50
#define GREENDAY_FAN_SCORE 75
#define MXPX_FAN_SCORE 100
#define NOFX_FAN_SCORE 200
#define NUMETAL_FAN_SCORE 400
#define TOUCH_SCORE 1
#define CHAMBER_BONUS_SCORE 15

/* nothing wrong with global */ 

int main(void)
{
	/* our sexy variables, oh baby! */
	char dir = 'G'; // for show.
	int x=0, i;

	int topswit[5] = {0,1,1,1,0}; // arrays for switches ...
	int botswit[5] = {1,0,1,0,1};

	/* game internal/external counters */
	int score=0;
	static int high_score=0;
	char spikes_left = 3;
	char decoys_left = 3;
	int level = 1;
	char posers_to_go;
	int bonus;

	/* game object 'values' */
	int core_size = 20; /* initial defaults */
	bool core_deadly = FALSE;
	bool walls_visable = TRUE;
	char spikes_weight;
	

	int extra_ship_score = 15000;
	char extra_ships_earned = 0; /* use this times above to see if free ship */
	
	signed char spike_x = 0;
	signed char spike_y = 0;

	setup();

	for(;;)
	{
		wait_recal();
		sound_update();
		sound_output();

		intensity(MAX_BRIGHTNESS);
	//	draw_core();
		set_scale(195);
		zero_beam();
		draw_vector_list_pattern(topwall);
		zero_beam();
		draw_vector_list_pattern(topchamber);
		zero_beam();
		draw_vector_list_pattern(rightwall);

		//set_scale(60);
/*		for (i = 1; i < 6 ; i++) 
		{

			move_to(-30,-30);
			if ( botswit[i] )
			{
				draw_vector_list_pattern(Switches);
			}

		}
		move_to(150,150); */
	//	move_to(0,150);

//		set_scale(195);
		
		zero_beam();
		draw_vector_list_pattern(bottomwall);
		zero_beam();
		draw_vector_list_pattern(bottomchamber);
		zero_beam();
		draw_vector_list_pattern(leftwall);

		set_scale(60);
		zero_beam();

		for (i = 0; i < 5 ; i++) /* switch draw routine ... FIX ME */
		{
			move_to(-30,-30);

			if ( topswit[i] )
				draw_vector_list_pattern(Switches);
		}
		move_to(150,150); /* move back to end of thingy */

// 		start drawcore

		zero_beam();
		if (x >= 195)
			dir = 'S';
		if (x <= 0)
			dir = 'G';
		if ( dir == 'G' )	
			x++;
		else
			x--;
		
		set_scale(x);
		draw_vector_list_pattern(Core);
//		#define DRAW_SCALE 190
//		set_scale(DRAW_SCALE);
//		draw_pit();
//		draw_switch(dir);
		draw_spud();
//		draw_deadspike();

//		#define MOVE_SCALE 20
		set_scale(200);
		zero_beam();
		move_to(spike_x, spike_y);
		#define DRAW_SCALE 20 
		set_scale(DRAW_SCALE);
		draw_vector_list_pattern(Spike);

		/* joystick shit here to end */
		if (joystick1_x < 0)
			spike_x-=3;
		else if (joystick1_x > 0)
				spike_x+=3;
		if (joystick1_y < 0)
			spike_y-=3;
		else if (joystick1_y > 0)
				spike_y+=3;
	
		joy_digital();
	}
	return 0; /* should never reach this */
}


void sound_update(void)
{
	;
}

void sound_output(void)
{
	;
}


void draw_switch(char x)
{
		#define SWITCH_SCALE 20
		set_scale(SWITCH_SCALE);
		move_to(-50,-50);
		draw_vector_list(Switches);
		move_to(-100,-75);
		draw_vector_list(Switches);
		return;
}

void draw_pit(void)
{
		#define DRAW_SCALE 190
		set_scale(DRAW_SCALE);
//		draw_vector_list_pattern(Pit);
		return;
}

void draw_core(void)
{
		static int x=0;
		x++;
		if (x > 180)
			x=0;
		#define DRAW_SCALE 40
		set_scale(x);
		move_to(40,-100);
		draw_vector_list(Core);
		return;
}

void draw_spud(void)
{
		#define DRAW_SCALE 30 
		set_scale(DRAW_SCALE);
		zero_beam();
		move_to(150,-100);
		draw_vector_list_pattern(Spud);
		return;
}

void draw_deadspike(void)
{
		#define MOVE_SCALE 20
		move_to(200,100);
		#define DRAW_SCALE 40 
		set_scale(DRAW_SCALE);
		draw_vector_list_pattern(Dead_Spike);
		return;
}

void setup(void)
{
	enable_joystick_1x();
	enable_joystick_1y();
	disable_joystick_2x();
	disable_joystick_2y();
	joy_digital();
	read_buttons();
	wait_recal();
	read_buttons();
	wait_recal();
}
