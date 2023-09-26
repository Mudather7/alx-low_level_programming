#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: the head of the linked list.
 *
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i = 0;

	if (!head)
		return (-1);
	temp = *head;
	if (!index)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1))
	{
		temp = temp->next;
		if (!temp)
			return (-1);
		i++;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
