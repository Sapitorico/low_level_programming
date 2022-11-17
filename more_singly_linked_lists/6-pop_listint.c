#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first node
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n = 0;

	if (!head || !*head)
		return (0);
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}

