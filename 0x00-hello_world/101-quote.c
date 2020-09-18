#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *main-Printing to stander error
 *Return: 1 in this case 1 is the intended succesfull output
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, s, strlen(s));

return (1);
}
