#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that  locates a substring
 * @haystack: input char
 * @needle: input char
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

	}
	return (0);
}
