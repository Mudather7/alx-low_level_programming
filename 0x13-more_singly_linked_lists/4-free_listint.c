#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: the head of the linked list.
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
