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
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *ptr1;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	while (ptr1 && (i < idx))
	{
		if (i == (idx - 1))
		{
			ptr->next = ptr1->next;
			ptr1->next = ptr;
			return (ptr);
		}
		else
			ptr1 = ptr1->next;
	}
	return (NULL);
}
