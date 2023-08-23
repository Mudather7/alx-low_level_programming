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
	int i;
	int j = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i = j] != '\0';
	return (dest);
}
