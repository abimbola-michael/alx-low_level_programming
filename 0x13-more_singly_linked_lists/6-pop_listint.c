#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: input listint
 * Return: n of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	next = (*head)->next;
	free(*head):
	*head = next;

	return (n);
}

