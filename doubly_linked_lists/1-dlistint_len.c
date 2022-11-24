#include "lists.h"
/**
 * dlistint_len - number of elements in a linked
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (NULL);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
