#include <stdio.h>
int main ()
{
  printf("Size of a char: %lu bytes(s)\n", sizeof(char));
  printf("Size of an int: %lu bytes(s)\n", sizeof(int));
  printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
  printf("Size of a float: %lu byte(s)\n", sizeof(float));
  
  return 0;
}
