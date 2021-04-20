#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: The index where valueis located, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array != NULL)
		for (idx = 0; idx < size; idx++)
		{
			printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
			if (array[idx] == value)
				return (idx);
		}
	return (-1);
}
