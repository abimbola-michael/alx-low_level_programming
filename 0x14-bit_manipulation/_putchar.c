#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - puting char
 * @c: input char
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
