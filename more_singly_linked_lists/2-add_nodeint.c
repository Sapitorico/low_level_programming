#include "lists.h"
/**
 * add_nodeint - add a new node
 * @head: pointer head
 * @n: int element
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		free(node);
		return (node);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
