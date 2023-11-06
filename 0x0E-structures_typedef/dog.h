#ifndef DOG_H
#define DOG_H

/**
 * struct dog - adog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: just alone dog struct in abig kitty world
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
