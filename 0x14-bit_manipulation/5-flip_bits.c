#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: input number
 * @m: another input number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int size = 0;
	unsigned long int current_num, exclusive_num;

	exclusive_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_num = exclusive_num >> i;
		if (current_num & 1)
			size++;
	}
	return (size);
}

