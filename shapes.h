/* shapes of stuff in Spike's Slam Pit */

#define SCALE 30

const signed char Spike[] = 
{
		  1,-19,14
       , -1,20,12
       , -1,-20,7
       , -1,-18,27
       , -1,-15,-31
       , -1,-27,-16
       , -1,26,-14
       , -1,12,-32
       , -1,15,27
       , -1,26,6
       , 0,-26,7
       , -1,1,0
       , 0,0,16
       , -1,1,0
       , 0,-10,5
       , -1,-7,-1
       , -1,1,8
       , 0,-1,-9
       , -1,-15,-13
       , -1,14,-15
       , -1,0,-8
       , 0,10,7
       , -1,-10,1
       , (0x01)
};

const signed char Dead_Spike[] =
{
		  1,12,17
           , -1,-11,-1
           , -1,10,18
           , -1,-11,-2
           , -1,-23,7
           , -1,0,-23
           , -1,-13,-17
           , -1,22,-4
           , -1,9,-19
           , -1,5,22
           , 0,0,7
           , -1,-4,4
           , 0,0,-5
           , -1,4,6
           , 0,0,11
           , -1,-5,4
           , 0,5,0
           , -1,-4,-7
           , 0,-12,4
           , -1,7,-13
           , -1,0,-1
           , -1,2,-15
           , 0,-5,21
           , -1,-6,-2
           , -1,-1,3
           , -1,3,4
           , -1,0,-4
           , -1,3,1
           , (0x01)
};

const signed char Spud[] =
{
 		 1,0,26
      , -1,-31,16
      , -1,-64,-16
      , -1,0,-27
      , -1,64,-16
      , -1,31,16
      , 0,-16,0
      , -1,-12,12
      , -1,12,12
      , 0,-14,-5
      , -1,0,1
      , 0,0,-16
      , -1,0,-1
      , 0,-43,3
      , -1,0,13
	  , (0x01)
};

#define SCALE 2
const signed char Switches[] =
{
	-1, -3*SCALE, 3*SCALE,
	-1,  0*SCALE, 5*SCALE,
	-1, -5*SCALE, 0*SCALE,
	-1,  0*SCALE,-5*SCALE,
	-1,  5*SCALE, 0*SCALE,
	-1,  3*SCALE, -3*SCALE,
	(0x01)
};

const signed char Bswitches[] =
{
	5,
	3*SCALE,-3*SCALE,
	0*SCALE,-5*SCALE,
	5*SCALE, 0*SCALE,
	0*SCALE, 5*SCALE,
   -5*SCALE, 0*SCALE,
   -3*SCALE, 3*SCALE
};



#define SCALE 2
const signed char Core[] =
{	
	    0, 35*SCALE ,0*SCALE,
      -1, 0*SCALE   ,7*SCALE,
      -1, -28*SCALE  ,28*SCALE,
      -1, -14*SCALE   ,0*SCALE,
      -1, -28*SCALE ,-28*SCALE,
      -1, 0*SCALE ,-14*SCALE,
      -1, 28*SCALE ,-28*SCALE,
      -1, 14*SCALE   ,0*SCALE,
      -1, 28*SCALE  ,28*SCALE,
      -1, 0*SCALE   ,7*SCALE,
      (0X01)
};

#define SCALE 1
const signed char topwall[] =
{
	  0, SCALE*76, 		-18*SCALE,
	 -1, 0*SCALE, 		37*SCALE,
     -1, -40*SCALE,		40*SCALE,
     -1, 0*SCALE,		6*SCALE,
	 (0x01)
};

const signed char topchamber[] =
{
     -1, 25*SCALE,		-25*SCALE,
     -1, 6*SCALE,		6*SCALE,
     -1, 0*SCALE, 		37*SCALE,
     -1, -6*SCALE,		6*SCALE,
     -1, -6*SCALE,		0*SCALE,
     -1, -6*SCALE,		-6*SCALE,
     -1, -6*SCALE,		0*SCALE,
     -1, -6*SCALE,		6*SCALE,
     -1, -12*SCALE,		0*SCALE,
     -1, -6*SCALE,		-6*SCALE,
     -1, 6*SCALE,		-6*SCALE,
	 (0x01)
};

const signed char rightwall[] =
{
     -1, 0*SCALE,		-6*SCALE,
     -1, -6*SCALE,		6*SCALE,
     -1, -37*SCALE,	0*SCALE,
	 (0x01)
};

const signed char bottomwall[] =
{
     -1, -58*SCALE,	-58*SCALE,
     -1, 0*SCALE,	-37*SCALE,
     -1, 25*SCALE,	-25*SCALE,
     -1, -6*SCALE,	0*SCALE,
	 (0x01)
};

const signed char bottomchamber[] =
{
     -1, -15*SCALE,		15*SCALE,
     -1, -6*SCALE,		-6*SCALE,
     -1, 0*SCALE,		-20*SCALE,
     -1, 6*SCALE,		-6*SCALE,
     -1, 6*SCALE,		0*SCALE,
     -1, -12*SCALE,		-12*SCALE,
     -1, 0*SCALE,		-6*SCALE,
     -1, 6*SCALE,		-6*SCALE,
     -1, 37*SCALE,		0*SCALE,
     -1,  6*SCALE,		6*SCALE,
     -1,  0*SCALE,		6*SCALE,
     -1, -17*SCALE,		17*SCALE,
	 (0x01)
};

const signed char leftwall[] =
{
    -1, 6*SCALE, 		0*SCALE,
    -1, 21*SCALE,		-21*SCALE,
    -1, 37*SCALE,		0*SCALE,
    -1, 58*SCALE,		58*SCALE,
	(0x01)
};

