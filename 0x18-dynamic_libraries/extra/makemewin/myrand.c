#include "gm.h"

int rand(void)
{
	static int cnt = -1;
	int mark[6] = {74, 8, 7, 9, 23, 8};

	cnt++;

	return (mark[cnt]);
}
