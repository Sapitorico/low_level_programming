#include "lists.h"
#include "7-get_nodeint.c"
/**
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nth = NULL, *node = NULL;

	if (!head)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	node = get_nodeint_at_index(*head, idx - 1);
	if (!node)
		return (NULL);
	nth = node->next;
	node->next = add_nodeint(&(node->next), n);
	if (!nth)
		return (NULL);
	node->next->next = nth;
	return (node->next);
}
