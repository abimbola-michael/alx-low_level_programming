#include "main.h"
#include <unistd.h>

/**
 * _islower - checka if character is lowercase
 * @c: character
 * Return: 1 if character is lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
