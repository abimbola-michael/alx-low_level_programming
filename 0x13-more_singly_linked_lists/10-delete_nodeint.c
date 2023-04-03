#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list
 * @head: input list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_head = *head;
	listint_t *current = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_head);
		return (1);
	}

	while (i < index - 1)
	{
		if (temp_head == NULL || temp_head->next == NULL)
			return (-1);
		temp_head = temp_head->next;
		i++;
	}

	current = temp_head->next;
	temp_head = current->next;
	free(current);

	return (1);
}


