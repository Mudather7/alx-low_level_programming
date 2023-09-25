#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list
 *
 * @head: the head of the linked list.
 *
 * @n: the new node.
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	ptr = *head;
	if (!ptr)
		return (NULL);
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
