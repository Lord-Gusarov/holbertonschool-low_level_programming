#include "gm.h"

int rand(void)
{
	static int cnt = -1;
	int mark[6] = {8, 7, 9, 23, 75, 9};

	cnt++;

	return (mark[cnt]);
}
