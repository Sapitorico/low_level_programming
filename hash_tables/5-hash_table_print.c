#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
		if (i < ht->size - 1)
			printf(", ");
	}
	printf("}\n");
}
