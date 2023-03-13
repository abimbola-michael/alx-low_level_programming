#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: input 1
 * @s2: input 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	newstr = malloc(sizeof(char) * (i + j + 1));
	if (newstr == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
