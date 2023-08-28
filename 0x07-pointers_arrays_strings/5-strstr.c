#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 *
 * @haystack: the string.
 *
 * @needle: the substring.
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	if (*needle != '\0')
	{
		return (haystack);
	}
	return (NULL);
}
