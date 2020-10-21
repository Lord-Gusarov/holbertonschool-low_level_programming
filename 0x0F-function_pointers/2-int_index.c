#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer using different
 * comparison functions
 * @array: array to search in
 * @size: size of array
 * @cmp: comparison function/definition to search with
 *
 * Return: the index of the first element for which @cmp does not return 0
 * if not element matches, returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; cmp(array[i]) == 0 && i < size; i++)
		;

	return ((i == size) ? -1 : i);
}
