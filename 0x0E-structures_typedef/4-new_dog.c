#include "dog.h"
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || owner == NULL)
		return (NULL);
	ndog = malloc(sizeof(*ndog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * strlen(name));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = malloc(sizeof(char) * strlen(owner));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->owner = strcpy(ndog->owner, owner);
	return (ndog);
}
