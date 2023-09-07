#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: pointer to the first string.
 *
 * @s2: pointer to the second string.
 *
 * @n: number of bytes.
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, l1, l2;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ptr = malloc(l1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	ptr = realloc(ptr, n);

	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
