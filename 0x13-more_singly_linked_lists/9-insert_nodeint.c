#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position.
 *
 * @head: the head of the linked list.
 *
 * @idx: the index of the list where the new node should be added.
 *
 * @n: the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *new;

	ptr = *head;
	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
