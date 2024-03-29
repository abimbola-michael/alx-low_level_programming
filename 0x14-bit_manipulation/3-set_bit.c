#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number pointer
 * @index: input int
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1UL << index));

	return (1);
}

