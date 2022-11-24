#include "hash_tables.h"
#include "1-djb2.c"
/**
 * key_index - gives you the index of a key.
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash = hash_djb2(key);

	return (hash % size);
}
