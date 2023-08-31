#include "main.h"
/**
 * last_index - function that count index of string.
 *
 * @s: the string.
 *
 * Return: int
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int x);
int last_index(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += last_index(s + 1) + 1;
	return (i);
}
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: string.
 *
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - checker for the palindrome.
 * @s: string.
 * @start: int moves form right to left.
 * @end: int moves form left to right.
 * @x: int.
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int x)
{
	if ((start == end && x != 0) || (start == end + 1 && x == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (check(s, start + 1, end - 1, x));
}
