#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: input char
 * @size: input int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + y];
	}
	for (i = size - 1; y >= 0; y--)
	{
		sum2 = sum2 + a[i * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
