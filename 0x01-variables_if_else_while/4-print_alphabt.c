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

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
