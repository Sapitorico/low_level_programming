#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int hash_table;
	char *new_value = NULL;

	if (!key || !ht)
		return (0);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	hash_table = key_index((const unsigned char *) key, ht->size);
	new_node = ht->array[hash_table];
	if (new_node != NULL && strcmp(new_node->key, key) == 0)
		free(new_node->value), new_node->value = new_value;
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = strdup(key);
		if (!new_node->key)
			return (0);
		new_node->value = new_value;
		new_node->next = ht->array[hash_table];
		ht->array[hash_table] = new_node;
	}
	return (1);
}
