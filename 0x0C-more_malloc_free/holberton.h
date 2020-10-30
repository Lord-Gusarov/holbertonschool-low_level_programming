#ifndef HOLBERTON_H_
#define HOLBERTON_H_
/*All functions prototypes for this project are to be declared here*/
/*---Holberton's putchar()---*/
int _putchar(char c);

/* Task : 0 */
void *malloc_checked(unsigned int b);

/* Task : 1 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Task : 2 */
void *_calloc(unsigned int nmemb, unsigned int size);

/* Task : 3 */
int *array_range(int min, int max);

/*------Advanced-----*/
/* Task : 4 (AKA 100) */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
/*Task : 4 (AKA 101)*/
void validate_arg_count(int count);
void validate_strings_only_have_digits(char *str1, char *str2);
int onlyDigits(char *str);
int _strlen(char *str);
#endif

