#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 *
 * @separator:the string to be printed between numbers.
 *
 * @n:number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", num);
	}
	va_end(args);
	printf("\n");
}
