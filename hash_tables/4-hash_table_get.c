#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key to be searched
 *
 * Return: value of associated key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_at_index = NULL;

	if (!key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node_at_index = ht->array[index];
	while (node_at_index)
	{
		if (!strcmp(node_at_index->key, key))
			return (node_at_index->value);
		node_at_index = node_at_index->next;
	}
	return (NULL);
}
