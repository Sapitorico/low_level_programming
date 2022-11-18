#include "lists.h"
#include "pop_listint.c"
#include "get_nodeint.c"
/**
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *node = *head;

	if (!head)
		return (-1);
	if (!index)
		return (_pop_listint(head));
	node = _get_nodeint_at_index(*head, index);
	if (!node)
		return (-1);
	prev = _get_nodeint_at_index(*head, index - 1);
	if (!prev)
		return (-1);
	_pop_listint(&(prev->next));
	return (1);
}
