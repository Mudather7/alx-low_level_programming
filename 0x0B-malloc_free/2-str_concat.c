#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i] != '\0'; i++)
		l++;
	concat = malloc(sizeof(char) * l);

	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat[j++] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concat[j++] = s2[i];
	return (concat);
}
