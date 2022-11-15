#include "lists.h"
#include "2-add_node.c"
/**
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = NULL, *node = *head;

	if (!node)
	{
		*head = add_node(head, str);
		return (*head);
	}
	while (node->next)
	{
		node = node->next;
	}
	end = add_node(head, str);
	node->next = end;
	end->next = node;
	return (end);
}
