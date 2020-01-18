#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to look for
 * Return: the value associated with the element, or NULL
 *         if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_dupl = strdup(key);
	unsigned int i = key_index((unsigned char *)key, ht->size);
	hash_node_t *tmp = ht->array[i];

	if (ht == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key_dupl) == 0)
			break;
		tmp = tmp->next;
	}

	free(key_dupl);

	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
