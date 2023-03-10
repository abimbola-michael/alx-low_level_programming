#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_num(char *str);

/**
 * check_num - checks if string is a number
 * @str: input char
 * Return: 0
 */

int check_num(char *str)
{
	int count = 0;

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
