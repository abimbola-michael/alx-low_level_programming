#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_num(char *str);
int _atoi(char *s);

/**
 * _atoi - function that convert a string to an integer.
 * @s: input
 * Return: number
*/

int _atoi(char *s)
{
	int d = 0;
	int n = 0;
	int f = 0;
	int digit = 0;
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}


/**
 * check_num - checks if string is a number
 * @str: input char
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - a program that adds positive numbers.
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;
	int string_int = 0;

	while (count < argc)
	{
		if (!check_num(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			string_int = _atoi(argv[count]);
			sum += string_int;
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
