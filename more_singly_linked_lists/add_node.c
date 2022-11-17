#include "lists.h"
#include "strcpy.c"
#include "strlen.c"
/**
 * add_node - adds a new node
 * @head: pointer to the first node
 * @str: pointer to the name string
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_node(listint_t **head, const char *str)
{
	listint_t *node = NULL;

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
