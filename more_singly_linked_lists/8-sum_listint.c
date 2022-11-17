#include "lists.h"
/**
 * sum_listint - sum of all the data (n)
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
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
