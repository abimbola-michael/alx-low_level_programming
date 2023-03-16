#include "main.h"
#include <stdlib.h>

/**
 * _memset - fill memory
 * @s: input
 * @c: input
 * @n: input
 * Return: void
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: input
 * @size: input
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = size * nmemb;
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
