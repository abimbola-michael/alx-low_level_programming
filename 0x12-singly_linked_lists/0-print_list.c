#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: input list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t st = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		st++;
	}

	return (st);
}



