#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: input list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
