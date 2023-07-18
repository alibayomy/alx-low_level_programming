#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 * Return: a new dog, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *n_dog;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;
	return (n_dog);
}
