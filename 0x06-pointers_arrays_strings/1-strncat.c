#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: first string
 *
 * @src: second dtring
 *
 * @n: integer
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j])
		j++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] != '\0';
	return (dest);
}
