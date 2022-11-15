#include "lists.h"
/**
 */
void free_list(list_t *head)
{
	list_t *node = head;

	for (; head;)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
