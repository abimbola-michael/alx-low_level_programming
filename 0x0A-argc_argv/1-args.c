#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}

