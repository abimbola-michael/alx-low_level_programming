#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, If value is not present
 * in array or if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, mid, left = 0, right = size - 1;

	if (size == 0 || !array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid  = (right + left) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
