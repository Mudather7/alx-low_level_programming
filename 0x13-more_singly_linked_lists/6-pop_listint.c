#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *
 * @head: the head of the linked list.
 *
 * Return: the head node’s data (n) or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (!head)
		return (0);

	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (data);
}
