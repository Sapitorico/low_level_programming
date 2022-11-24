#include "lists.h"
/**
 * sum_dlistint - sum all data of a dlistint_t linked list
 * @head: head of the list
 *
 * Return: sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	for (; head;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

