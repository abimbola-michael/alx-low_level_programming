#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string
 * given as a parameter
 * @str: input
 * Return: char
 */

char *_strdup(char *str)
{
	char *newstr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	newstr = malloc(sizeof(char) * (i + 1));
	if (newstr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		newstr[j] = str[j];
	return (newstr);
}
