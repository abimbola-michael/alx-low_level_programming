#include "main.h"
/**
 * reverse_array - function that compares reverses the content
 * of an array of integers
 * @a: input
 * @n: input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
