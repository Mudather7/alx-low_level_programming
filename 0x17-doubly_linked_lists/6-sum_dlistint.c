#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 *
 * @head: head of the list.
 *
 * Return: the sum of all the data.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temph;
	int sum = 0;

	if (head == NULL)
		return (0);

	temph = head;
	while (temph != NULL)
	{
		sum += temph->n;
		temph = temph->next;
	}
	return (sum);
}
