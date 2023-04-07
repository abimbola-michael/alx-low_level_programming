#include  "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int size = 0;
	unsigned long int current_num;

	for (i = 63; i >= 0; i--)
	{
		current_num = n >> i;
		if (current_num & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
		{
			_putchar('0');
		}
	}
	if (size == 0)
		_putchar('0');
}
