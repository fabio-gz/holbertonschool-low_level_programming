#ifndef dogo
#define dogo
/**
 *struct dog - types for dog
 *@name: dogs name
 *@age: dogs age
 *@owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
