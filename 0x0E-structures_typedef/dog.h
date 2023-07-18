#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - new user defined type
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
