#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: head of the linked list.
 *
 * @str: string to add.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	ptr = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (new);
}

/**
 * _strlen - Calculate lenght of a string.
 * @s: string.
 *
 * Return: lenght of the string s.
 */

int _strlen(const char *s)
{
	int idx = 0;

	for (; s[idx]; idx++)
	;
	return (idx);
}
