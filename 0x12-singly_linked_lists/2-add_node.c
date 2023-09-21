#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 *@head: head of the linked list.
 *
 *@str: string to add.
 *
 * Return:the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *New;

	if (New == NULL)
		return (NULL);
	New->str = strdup(str);
	New->len = _strlen(str);
	New->next = *head;
	*head = New;
	return (New);
}

/**
 * _strlen - Calculate lenght of a string.
 *
 * @s: string.
 *
 * Return: lenght of the string s.
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	;
	return (i);
}
