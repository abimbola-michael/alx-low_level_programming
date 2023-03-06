#include "main.h"
#include <stdio.h>

/*
 * _memset - function that fills memory with a constant byte.
 * @s: input char
 * @b: input char
 * @n: input int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
