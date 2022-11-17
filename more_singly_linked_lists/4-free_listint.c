#include "lists.h"
/**
 * free_listint -  frees a listint_t
 * @head: pointer no first node
 */
void free_listint(listint_t *head)
{
	listint_t *node = head;

	for (; node;)
	{
		head = head->next;
		free(node);
		node = head;
	}
}
