#include <stdio.h>
#include "dog.h"

/**
  * print_dog - takes a pointer to a struct dog and
  * prints the elements of that struct
  * @d: pointer
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

