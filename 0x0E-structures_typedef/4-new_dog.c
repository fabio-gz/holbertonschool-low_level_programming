#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - lenght of a string
 *@s: char for string
 *Return: int lenght
 */
int _strlen(char *s)
{
	int n = 0;

	for (; s[n] != '\0';)
	{
		n++;
	}
	return (n);
}
/**
 *_strcpy -copy a string
 *@dest: destination of copy
 *@src: source to be copied
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *new_dog - new structure
 *@name: string dogs name
 *@age: dogs age
 *@owner: string owners name
 *Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
	{
		return (NULL);
	}

	pup->name = malloc((_strlen(name) + 1) * (sizeof(char)));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->name = _strcpy(pup->name, name);

	pup->owner = malloc((_strlen(owner) + 1) * (sizeof(char)));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	pup->owner = _strcpy(pup->owner, owner);

	pup->age = age;

	return (pup);
}
