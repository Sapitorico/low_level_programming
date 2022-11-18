#include "lists.h"
#include "7-get_nodeint.c"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element
 * @idx: index
 * @n: element
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nth = NULL, *node = *head;

	if (!head)
		return (NULL);
	if (!idx)
		return (add_nodeint(head, n));
	node = get_nodeint_at_index(*head, idx - 1);
	if (!node)
		return (NULL);
	nth = add_nodeint(&(node->next), n);
	return (nth);
}
