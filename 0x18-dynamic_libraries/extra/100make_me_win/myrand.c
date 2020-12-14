/*my own version of rand*/

int rand(void)
{
	static int cnt = -1;
	int mark[6] = {1, 1, 1, 1, 1, 1};

	cnt++;
	return (mark[cnt]);
}
