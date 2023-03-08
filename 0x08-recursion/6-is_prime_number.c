#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: input
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 0));
}

/**
 * prime_number - function that checks for prime number
 * @n: input
 * @i: input
 * Return: int
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
