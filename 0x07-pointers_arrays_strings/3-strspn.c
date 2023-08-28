#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: first string.
 *
 * @accept: second string.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0' && accept[i] != '\0' && s[i] == accept[i])
	{
		i++;
	}
	return (i);
}
