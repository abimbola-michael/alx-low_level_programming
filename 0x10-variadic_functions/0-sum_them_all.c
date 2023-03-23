#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input int
 * @...: vararg
 * Return: value or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}


