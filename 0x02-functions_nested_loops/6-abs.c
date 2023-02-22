#include "main.h"
#include <unistd.h>

/**
 * _abs -  a function that computes the absolute value of an integer
 * @n: input
 * Return: n if greater than or equal to 0 else -n.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}

}
