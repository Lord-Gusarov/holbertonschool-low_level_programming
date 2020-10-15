#ifndef HOLBERTON_H
#define HOLBERTON_H
/*All function prototypes for this project are to be declared here*/
/* Task : 0 */
char *create_array(unsigned int size, char c);
/* Task : 1 */
char *_strdup(char *str);
/* Task : 2 */
char *str_concat(char *s1, char *s2);
/* Task : 3 */
int **alloc_grid(int width, int height);
/* Task : 4 */
void free_grid(int **grid, int height);
/* Task : 5 */
char *argstostr(int ac, char **av);
/* Advanced--Task : 6 */
char **strtow(char *str);
int _wc(char *str);
/*---Holberton's putchar---*/
int _putchar(char c);
#endif
