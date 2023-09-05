#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr -  function that concatenates all the arguments of your program.
 *
 * @ac:number of arguments
 *
 * @av:arguments
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, n, l;
	char *a;

	n = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	}

	a = (char *)malloc(l + ac + 1 * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[n] = av[i][j];
			n++;
		}
		a[n] = '\0';
		n++;
	}
	a[n] = '\0';
	return (a);
}
