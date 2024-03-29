#include "dog.h"
#include<stddef.h>
/**
 * init_dog - initialize a variable type of struct dog
 * @d: pointer to the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
