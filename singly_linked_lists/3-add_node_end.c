#include "lists.h"
#include "2-add_node.c"
/**
 * add_node_end - adds a new node at the end
 * @head: pointer to the first node
 * @str: pointer to the name string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = NULL, *node = *head;

	if (!node)
	{
		*head = add_node(head, str);
		return (*head);
	}
	for (;node->next;)
		node = node->next;
	end = add_node_end(&(node->next), str);
	return (end);
}
