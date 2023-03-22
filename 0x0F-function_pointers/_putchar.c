#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the charater to print
 * Return: On Success 1.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
