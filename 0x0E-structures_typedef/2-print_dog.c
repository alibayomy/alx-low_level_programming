#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: the dog to init
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d-name : "(nill)");
		printf("Age: %f\n", d->age ? d-age : "(nill)");
		printf("Owner: %s\n", d->owner ? d-owbner : "(nill)"); 
	}
}
