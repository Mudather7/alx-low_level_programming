#include "main.h"
/**
 * *_strcpy - function that copies the string pointed.
 *
 * @src: the string.
 *
 * @dest: the pointer.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	for (l = 0; src[l] != '\0'; l++)
		;
	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[i] != '\0';

	return (dest);
}
