#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters to uppercase.
 *
 * @a: the string.
 *
 * Return: 0
 */
char *string_toupper(char *a)
{
	int l;

	for (l = 0; a[l] != '\0'; l++)
	{
		if (a[l] >= 'a' && a[l] <= 'z')
		{
			a[l] = a[l] - 32;
		}
	}
	return (a);
}
