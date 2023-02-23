#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * positive_or_negative -Print if the number is positive, negative or zero
 * @i: input
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
