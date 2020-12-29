#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates key for the 'crackme5' advanced task
 * @ac: argument count
 * @av: arguments to the program
 *
 * Return: 0 for succes, EXIT_FAILURE for failure
 * it takes a string for the name of the user and calculates
 * the appropiatte key/password
 */
int main(int ac, char **av)
{
	char key[7] = {'\0'}, *user;
	int i, len;
	long int fv = 0;
	char *cr = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (ac != 2)
	{
		printf("Usage: %s username\n", av[0]);
		exit(EXIT_FAILURE);
	}

	len = strlen(av[1]);
	user = av[1];

	key[0] = cr[((len ^ 0x3b) & 0x3f)];
	for (i = 0; i < len; i++)
		fv += user[i];
	key[1] = cr[((fv ^ 0x4f) & 0x3f)];
	for (i = 0, fv = 1; i < len; i++)
		fv *= user[i];
	key[2] = cr[((fv ^ 0x55) & 0x3f)];
	for (i = 0, fv = user[0]; i < len; i++)
		if (fv < user[i])
			fv = user[i];
	srand(fv ^ 0xe);
	key[3] = cr[rand() & 0x3f];
	for (i = 0, fv = 0; i < len; i++)
		fv += user[i] * user[i];
	key[4] = cr[(fv ^ 0xef) & 0x3f];
	for (i = 0, len = user[0]; i < len; i++)
		fv = rand();
	key[5] = cr[(fv ^ 0xe5) & 0x3f];


	printf("%s", key);

	return (0);
}
