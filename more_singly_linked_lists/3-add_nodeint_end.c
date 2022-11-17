#include "lists.h"
#include "2-add_nodeint.c"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to first node
 * @n: int element
 *
 * Return: end node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = NULL, *node = *head;

	if (!node)
	{
		*head = add_nodeint(head, n);
		return (*head);
	}
	for (; node->next;)
		node = node->next;
	end = add_nodeint_end(&(node->next), n);
	return (end);
}
