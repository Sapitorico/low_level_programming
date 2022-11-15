#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *node = head;

	for (; head;)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
