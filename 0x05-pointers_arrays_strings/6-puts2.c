#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: input
 */
void puts2(char *str)
{
	char *y = str;
	int count = 0;
	int t = 0;
	int o;

	while (*y != '\0')
	{
		y++;
	}
	t = count - 1;

	for (o = 0; o < t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
