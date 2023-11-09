#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node at
 * the beginning of a dlistint_t list.
 *
 * @head: double pointer to first node
 *
 * @n: new node
 *
 * Return: Address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;
	return (newnode);
}
