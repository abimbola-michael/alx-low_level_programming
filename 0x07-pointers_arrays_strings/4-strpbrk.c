#include "main.h"

#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input char
 * @accept: input char
 * Return: unsigned int
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s[i]);
			}
		}

	}
	return ('\0');
}
