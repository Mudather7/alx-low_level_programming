#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @s: a string.
 *
 * Return: the string.
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rotated = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		while (alphabet[j] != '\0')
		{
			if (s[i] == alphabet[j])
			{
				s[i] == rotated[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
