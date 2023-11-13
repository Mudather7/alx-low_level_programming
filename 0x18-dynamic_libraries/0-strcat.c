#include "main.h"
#include <string.h>
/**
 * *_strcat -  function that concatenates two strings.
 *
 * @dest: first string.
 *
 * @src: second string.
 *
 * Return: 0.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];

	return (dest);
}
