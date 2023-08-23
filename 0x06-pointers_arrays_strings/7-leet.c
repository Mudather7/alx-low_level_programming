#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 *
 * @s: string
 *
 * Return: 0
 */
char *leet(char *s)
{
	int i, j;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char x[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = x[j / 2];
			}
		}
	}
	return (s);
}

