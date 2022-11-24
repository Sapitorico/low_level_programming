#include "lists.h"
#include "5-get_dnodeint.c"
/**
 * insert_dnodeint_at_index - insert node at given position
 * @h: head of the list
 * @idx: position to insert the node
 * @n:  number to insert in node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nth = NULL, *node = *h;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	node = get_dnodeint_at_index(*h, idx - 1);
	if (!node)
		return (NULL);
	nth = add_dnodeint(&(node->next), n);
	nth->prev = node;
	node->next = nth;
	return (node->next);
}
