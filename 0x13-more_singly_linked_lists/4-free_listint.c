#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
