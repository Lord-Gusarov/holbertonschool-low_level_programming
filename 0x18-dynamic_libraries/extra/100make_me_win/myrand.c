/*my own version of rand*/

int rand(void)
{
	static int cnt = -1;
	int mark[6] = {8, 7, 9, 23, 74, 8};

	cnt++;
	return (mark[cnt]);
}
