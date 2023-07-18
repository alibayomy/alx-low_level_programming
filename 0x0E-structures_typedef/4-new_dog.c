#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - calculate the length of s
 * @s : the given s to get the length
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * str_cpy - copy a string
 * @s1: the string to be copied from
 * @s2: the string to be copied to
 * Return: a copy of the given string
 */
char *str_cpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	return (s2);
}
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
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(sizeof(char) * (_strlen(name)  + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = str_cpy(name, n_dog->name);
	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
	}
	n_dog->owner = str_cpy(owner, n_dog->owner);
	n_dog->age = age;
	return (n_dog);
}
