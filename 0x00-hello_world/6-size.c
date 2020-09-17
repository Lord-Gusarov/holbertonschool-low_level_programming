#include <stdio.h>

/**
 *main - Printing 32 and 64 systemsn specific sizes for common types
 *
 *Return: always 0 (succes)
 */
int main(void)
{
printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
