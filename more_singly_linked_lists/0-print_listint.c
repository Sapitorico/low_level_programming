#include "lists.h"
/**
 * print_listint - print all the lements of list
 * @h: pointer head
 *
 * Return: number of elemnts
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	for (; h; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
