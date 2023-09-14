#include "variadic_functions.h"
/**
 * print_all -  function that prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;

	int i = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
					break;
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'f' || format[i] == 'i' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
