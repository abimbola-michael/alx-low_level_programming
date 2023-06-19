#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input char
 * @accept: input char
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}

	}
	return (n);
}
