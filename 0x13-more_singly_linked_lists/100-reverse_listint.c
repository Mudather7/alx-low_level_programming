#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: the head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *temp = NULL;

	while (*head)
	{
		ptr = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = ptr;
	}
	*head = temp;
	return (*head);
}
