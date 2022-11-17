#include "lists.h"
/**
 * listint_len - number of elements
 * @h: pointer to head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	for (; h; len++)
	{
		h = h->next;
	}
	return (len);
}
