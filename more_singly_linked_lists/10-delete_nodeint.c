#include "lists.h"
#include "6-pop_listint.c"
#include "7-get_nodeint.c"
/**
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *node = *head;
	int n = 0;

	if (!head)
		return (-1);
	if (!index)
		return (pop_listint(head));
	node = get_nodeint_at_index(*head, index);
	if (!node)
		return (-1);
	prev = get_nodeint_at_index(*head, index - 1);
	n = pop_listint(&(prev->next));
	return (n);
}
