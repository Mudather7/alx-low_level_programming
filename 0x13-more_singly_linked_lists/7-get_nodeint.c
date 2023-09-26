#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: the head of the linked list.
 *
 * @index: the index of the node, starting at 0.
 *
 * Return: the nth node of the linked list
 * or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	if (!ptr)
		return (NULL);

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
