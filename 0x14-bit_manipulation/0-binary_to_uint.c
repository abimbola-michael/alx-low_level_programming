#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input char pointers
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
		i++;
	}

	return (decimal);
}

