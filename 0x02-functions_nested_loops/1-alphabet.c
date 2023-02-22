#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - prints all alphabets from a to z
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
