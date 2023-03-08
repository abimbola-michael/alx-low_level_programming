#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_recursion(n, 0));
}

/**
 * actual_recursion - function that returns the natural square root of a number
 * @n: input
 * @i: input
 * Return: int
 */

int actual_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_recursion(n, i + 1));
}
