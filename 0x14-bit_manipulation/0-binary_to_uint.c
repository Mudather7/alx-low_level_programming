#include "main.h"
/**
 * binary_to_uint - unction that converts a binary number to an unsigned int.
 *
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
