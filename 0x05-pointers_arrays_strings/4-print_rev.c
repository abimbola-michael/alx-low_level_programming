#include "main.h"
/**
 * print_rev - that prints a string, in reverse, followed by a new line
 * @s: input
 */
void print_rev(char *s)
{
	int count = 0;
	int o;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (o = count; i > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
