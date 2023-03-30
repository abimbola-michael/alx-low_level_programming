#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: input lists
 * @str: input string
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	list_t *temp_head = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}

	list->str = strdup(str);
	list->len = len;
	list->next =  NULL;

	if (*head == NULL)
	{
		*head = list;
		return (list);
	}

	while (temp_head->next)
		temp_head = temp_head->next;
	temp_head->next = list;

	return (list);
}
