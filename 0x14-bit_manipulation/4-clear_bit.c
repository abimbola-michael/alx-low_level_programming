#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input number
 * @index: input int index
 * Return: 1 or -1;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & (~(1UL << index)));

	return (1);
}
