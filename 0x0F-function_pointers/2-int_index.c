#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 *
 * @array:array containing elements.
 *
 * @size:number of elements in the array array.
 *
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: the integer index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != 0 && cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
