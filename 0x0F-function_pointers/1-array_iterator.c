#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: input array
 * @size: input size_t
 * @action: input function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	int i;

	for (i == 0; i < size; i++)
		action(array[i]);
}
