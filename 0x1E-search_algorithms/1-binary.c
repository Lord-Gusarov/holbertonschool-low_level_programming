#include "search_algos.h"

/**
 * print_sub_arr - prints the elements of an array between the given margins
 * @array: arrar from wich to print
 * @L: leftmost index
 * @R: rightmost index
 */
void print_sub_arr(int *array, int L, int R)
{
	if (L <= R)
	{
		printf("Searching in array: %d", array[L]);
		for (L++; L <= R; L++)
			printf(", %d", array[L]);
		printf("\n");
	}
}


/**
 * binary_search - searches for a value in an array of integers using
 * the binary search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: The index where value is located, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0, R = size - 1, mid;

	if (array != NULL)
	{
		print_sub_arr(array, L, R);
		while (L <= R)
		{
			mid = (L + R) / 2;
			if (array[mid] < value)
			{
				L = mid + 1;
				print_sub_arr(array, L, R);
			}
			else if (array[mid] > value)
			{
				R = mid - 1;
				print_sub_arr(array, L, R);
			}
			else
				return (mid);
		}
	}
	return (-1);
}
