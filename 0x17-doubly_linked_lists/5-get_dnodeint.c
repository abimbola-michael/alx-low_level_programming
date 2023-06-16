#include "lists.h"

/**
 * get_dnodeint_at_index - a function that finds
 * a specific node of a linked list
 * @head: head pointer to the beginning of the list
 * @index: index of node
 * Return: pointer to the indexed node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
