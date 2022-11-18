#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * pop_listint - deletes the head node
 * @head: pointer to the first node
 *
 * Return: head node’s data (n)
 */
int _pop_listint(listint_t **head)
{
	listint_t *node = *head;

	if (!head || !*head)
		return (-1);
	*head = node->next;
	free(node);
	return (1);
}
