#include "lists.h"
/**
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
