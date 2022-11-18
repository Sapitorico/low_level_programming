#include "lists.h"
#include "pop_listint.c"
#include "get_nodeint.c"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to first node
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *node = *head;

	if (!head)
		return (-1);
	if (index == 0)
		return (_pop_listint(head));
	node = _get_nodeint_at_index(*head, index);
	if (!node)
		return (-1);
	prev = _get_nodeint_at_index(*head, index - 1);
	if (!prev)
		return (-1);
	return (_pop_listint(&(prev->next)));
}
