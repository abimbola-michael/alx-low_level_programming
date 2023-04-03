#include "lists.h"
/**
 * insert_nodeint_at_index - returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: input listint
 * @idx: node index
 * @n: n to add to node
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
		{
			current = current->next;
		}
		i++;
	}

	return (NULL);
}


