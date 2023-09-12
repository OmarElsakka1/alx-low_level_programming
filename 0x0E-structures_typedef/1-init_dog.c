#include "dog.h"
/**
 * init_dog - init dog
 * @d: ptr to dog
 * @name: name
 * @age: age
 * @owner: owner
 * Rerurn: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
