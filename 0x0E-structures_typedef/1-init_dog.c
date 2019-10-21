#include "dog.h"
/**
 *init_dog - initialize variable
 *@d: structure
 *@name: string with name
 *@age: float with age
 *@owner: string with owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
