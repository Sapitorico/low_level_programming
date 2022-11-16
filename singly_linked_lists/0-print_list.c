#include "lists.h"
#include "_printf.c"
/**
 * print_list - function that prints all the elements
 * @h: pointer to the structure
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		if (!h->str)
		{
			_printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			_printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}
