#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d : the dog to print
 *
 * Return : void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("NAME: %s\n", d->name ? d->name : "(nil)");
	printf("AGE: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
