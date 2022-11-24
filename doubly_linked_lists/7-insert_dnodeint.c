#include "lists.h"
/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nth = NULL, *node = *h;

	if (!h)
		return (NULL);
	if (!idx)
	{
		*h = add_dnodeint(h, n);
		if (!*h)
		{
			free_dlistint(*h);
			return (NULL);
		}
		return (*h);
	}
	node = get_dnodeint_at_index(*h, idx - 1);
	if (!node)
		return (NULL);
	nth = add_dnodeint(&(node->next), n);
	return (nth);
}
