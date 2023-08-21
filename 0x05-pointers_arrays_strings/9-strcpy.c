#include "main.h"
/**
 * *_strcpy -  function that copies the string pointed.
 *
 * @src: the string.
 *
 * @dest: the pointer.
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}


