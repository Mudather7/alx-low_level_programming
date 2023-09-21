#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t list.
 *
 * @h: pointer to the first node.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
