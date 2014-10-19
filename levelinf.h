/* definitions of objects on diff levels ... */

const signed char walls_visable[] =
{	/* 10 levels at a time ... for now FIX ME */
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE
};

const signed char core_deadly[] =
{	/* 10 levels at a time ... for now FIX ME */
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE,
	FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE, FALSE,
	TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE, TRUE
};


const signed char num_positron[] =
{	/* 10 levels at a time ... FIX ME */
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35
};

const signed char num_greenday[] =
{	/* 10 levels at a time ... FIX ME */
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35
};

const signed char num_mxpx[] =
{	/* 10 levels at a time ... FIX ME */
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35
};

const signed char num_nofx[] =
{	/* 10 levels at a time ... FIX ME */
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35
};

const signed char num_numetal[] =
{	/* 10 levels at a time ... FIX ME */
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35,
	15, 20, 25, 30, 40, 15, 20, 25, 30, 35
};

