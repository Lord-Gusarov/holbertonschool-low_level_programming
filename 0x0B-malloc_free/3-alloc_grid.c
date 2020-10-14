#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width for new array
 * @height: height for new array
 *
 * Return: pointer to 2 day array or NULL if failure to initialize
 */
int **alloc_grid(int width, int height)
{
	int w, h;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int*) * height);
	if (a == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		a[h] = malloc(sizeof(int) * width);
		if (a[h] == NULL)
			return (NULL);
		for (w = 0; w < width; w++)
			a[h][w] = 0;
	}
	return (a);
}
