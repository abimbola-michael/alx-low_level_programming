#include "main.h"
/**
 * _strcpy - function that copies a string
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i = 0;

	while (j < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
