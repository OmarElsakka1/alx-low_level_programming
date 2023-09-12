#include "dog.h"
#include<string.h>
#include<stdlib.h>

/**
 * new_dog - copies dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog ptr
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d2;

	d2 = malloc(sizeof(dog_t));
	if (!d2)
		return (NULL);

	d2->name = malloc(strlen(name) + 1);
	if (!d2->name)
	{
		free(d2);
		return (NULL);
	}
	d2->name = strcpy(d2->name, name);

	d2->owner = malloc(strlen(owner) + 1);
	if (!d2->owner)
	{
		free(d2->name);
		free(d2);
		return (NULL);
	}
	d2->owner = strcpy(d2->owner, owner);
	d2->age = age;
	return (d2);
}
