#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
