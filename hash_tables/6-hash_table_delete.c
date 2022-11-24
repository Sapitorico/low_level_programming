#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash = NULL, aux = NULL;
	int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		hash = ht->array[i];
		while (hash)
		{
			aux = hash;
			hash = hash->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
