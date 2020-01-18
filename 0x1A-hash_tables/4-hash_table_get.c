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
	char *key_dupl;
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	key_dupl = strdup(key);
	i = key_index((unsigned char *)key, ht->size)
	tmp = ht->array[i];

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
