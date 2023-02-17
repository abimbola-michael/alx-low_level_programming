#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -Print if the number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
