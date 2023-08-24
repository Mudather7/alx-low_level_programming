#include "main.h"
/**
 * *rot13 -  function that encodes a string using rot13.
 *
 * @s: a string.
 *
 * Return: 0
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char x[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = x[j];
				break;
			}
		}
	}
	return (s);
}
