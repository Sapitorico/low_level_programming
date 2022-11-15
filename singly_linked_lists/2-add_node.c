#include "lists.h"
#include "strcpy.c"
#include "strlen.c"
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (node);
	}
	node->str = malloc(sizeof(char) * _strlen(str) + 1);
	if (!node->str)
	{
		free(node);
		return (node);
	}
	_strcpy(node->str, str);
	node->len = _strlen(str);
	node->next = *head;

	*head = node;
	return (node);
}
