#include "hash_tables.h"

/**
 * h_handler - collision handler
 * @ht: hash tables
 * @new_node: node to add or update
 */
void h_handler(hash_table_t *ht, hash_node_t *new_node)
{
	unsigned int i = key_index((unsigned char *)new_node->key, ht->size);
	hash_node_t *tmp = ht->array[i];

	if (tmp != NULL)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, new_node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			new_node->next = ht->array[i];
			ht->array[i] = new_node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(new_node->value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
		}
	}
	else
	{
		new_node->next = NULL;
		ht->array[i] = new_node;
	}
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key (it cannot be an empty string)
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || new_node == NULL || *key == '\0' || key == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	h_handler(ht, new_node);

	return (0);
}
