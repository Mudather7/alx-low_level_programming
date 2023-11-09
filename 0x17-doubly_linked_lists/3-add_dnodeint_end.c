#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 *
 * @head: head of the list
 *
 * @n: new node
 *
 * Return: Address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	
	if (*head != NULL)
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->prev = *head;

	return (newnode);
}
