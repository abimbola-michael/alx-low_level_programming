#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: input
 * @src: input
 * @n: input
 * Return: char
 */
char *_strcat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
