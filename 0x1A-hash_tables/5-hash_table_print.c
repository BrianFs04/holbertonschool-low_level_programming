#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	char *spa;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	spa = "";

	for (i = 0; i < ht->size; ++i)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", spa, tmp->key, tmp->value);
			spa = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
