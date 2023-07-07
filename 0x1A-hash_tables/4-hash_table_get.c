#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key
 * couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int node_index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node_index = key_index(key, ht->size);

	if (node_index >= ht->size)
		return (NULL);

	node = ht->array[node_index];

	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	if (node == NULL)
		return (NULL);

	return (node->value);
}
