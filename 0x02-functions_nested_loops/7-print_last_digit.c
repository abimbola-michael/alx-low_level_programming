#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input
 * Return:  the value of the last digit.
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
