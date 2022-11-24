#include "lists.h"
#include "2-add_dnodeint.c"
/**
 * add_dnodeint_end - add a node at the end
 * @head: head of the list
 * @n: integer type
 *
 * Return: end node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head;

	if (!node)
		return (add_dnodeint(head, n));
	while (node->next)
		node = node->next;
	node->next = add_dnodeint(head, n);
	node->next->prev = node;
	return (node->next);
}
