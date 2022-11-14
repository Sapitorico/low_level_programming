#include "lists.h"
/**
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
