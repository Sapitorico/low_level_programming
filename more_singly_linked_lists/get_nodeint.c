#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node
 * @index: index
 *
 * Return: the nth node
 */
listint_t *_get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	if (!head)
		return (head);
	for (; count != index; count++)
	{
		if (node->next)
			node = node->next;
		else
			return (0);
	}
	return (node);
}
