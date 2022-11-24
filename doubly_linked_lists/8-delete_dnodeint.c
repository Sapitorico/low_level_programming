#include "lists.h"
#include "5-get_dnodeint.c"
int pop_dlistint(dlistint_t **head);
/**
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *node = *head;

	if (!head)
		return (-1);
	if (index == 0)
		return (pop_dlistint(head));
	node = get_dnodeint_at_index(*head, index);
	if (!node)
		return (-1);
	prev = get_dnodeint_at_index(*head, index -1);
	if (!prev)
		return (-1);
	return (pop_dlistint(&(prev->next)));
}
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *node = 0;

	if (!head || !(*head))
		return (0);
	node = *head;
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free(node);
	return (1);
}
