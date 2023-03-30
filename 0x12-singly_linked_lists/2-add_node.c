#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: input lists
 * @str: input string
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
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
	list->next = (*head);
	(*head) = list;

	return (*head);
}

