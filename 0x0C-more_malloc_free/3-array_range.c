#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: input
 * @max: input
 * Return: int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
