#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: first node of the list
 * @index: index of node
 *
 * Return: node at index or NULL if fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *node = head;

	if (!head)
		return (NULL);
	for (; count != index; count++)
	{
		if (node->next)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
