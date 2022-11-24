#include "hash_tables.h"
/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: string
 *
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c = 0;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
