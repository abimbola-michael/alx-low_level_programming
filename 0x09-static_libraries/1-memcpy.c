#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: input char
 * @src: input char
 * @n: input int
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int size = n;

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
