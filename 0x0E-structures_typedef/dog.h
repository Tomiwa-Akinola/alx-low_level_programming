#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog descrioption
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
