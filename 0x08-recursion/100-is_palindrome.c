#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - function that returns 1 if
 * a string is a palindrome and 0 if not
 * @s: input
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen(s)));
}

/**
 * _strlen- function that counts string
 * @s: input
 * Return: int
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + strlen(s + 1));
}

/**
 * check_palindrome - function that check palindrome
 * @s: input
 * @i: input
 * @len: input
 * Return: int
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

