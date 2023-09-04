#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: the string.
 *
 * Return: a pointer to the duplicated string, or NULL.
 */
char *_strdup(char *str)
{
	char *c;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		l++;
	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];
	c[l] = '\0';
	return (c);
}
