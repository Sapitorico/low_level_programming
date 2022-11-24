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
	dlistint_t *end = NULL, *node = *head;

	if (!node)
	{
		*head = add_dnodeint(head, n);
		return (*head);
	}
	while (node->next)
		node = node->next;
	end = add_dnodeint(&(node->nex), n);
	return (end);
}
