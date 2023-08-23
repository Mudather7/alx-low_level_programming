#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @str: string.
 *
 * Return: 0
 */
char *cap_string(char *str)
{
	int i, j;
	char a[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')',
			'{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
			if (str[i] == a[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}

