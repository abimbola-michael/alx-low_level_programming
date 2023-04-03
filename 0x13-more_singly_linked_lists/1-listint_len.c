#include "lists.h"
/**
 * listint_len - return  number of all the elements of a listint_t
 * @h: input list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
