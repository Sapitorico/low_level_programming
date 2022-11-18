#include "lists.h"
#include "7-get_nodeint.c"
/**
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nth = NULL, *node = NULL;

	if (!head)
		return (NULL);
	nth = get_nodeint_at_index(*head, idx);
	node = add_nodeint(&nth, n);
	if (!node)
		return (NULL);
	if (!idx)
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
