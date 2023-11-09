#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 *
 * @head: head of the list.
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temph = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temph = head;
		head = head->next;
		free(temph);
	}
	free(head);
}
