#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog.
 *
 * @d:the dog to print
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
