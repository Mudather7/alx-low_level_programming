#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: first pointer.
 *
 * @accept: second pointer.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *i = accept;

		while (*i != '\0')
		{
			if (*i == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
