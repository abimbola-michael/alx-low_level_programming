#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: input char array
 * @to: input char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
