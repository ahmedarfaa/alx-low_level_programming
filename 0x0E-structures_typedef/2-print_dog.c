#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - E
 * @d: ..
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}

};
