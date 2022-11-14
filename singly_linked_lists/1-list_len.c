#include "lists.h"
/**
 * list_len - counts the number of elements
 * @h: pointer to the structure
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
