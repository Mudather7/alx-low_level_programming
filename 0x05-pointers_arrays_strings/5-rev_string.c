#include "main.h"
/**
 * rev_string - function that reverses a string.
 *
 * @s: the string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i, l;
	char temp;

	for (l = 0; s[l] != 0; l++)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
