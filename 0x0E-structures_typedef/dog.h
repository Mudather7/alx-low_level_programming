#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structuer.
 *
 * @name: first element of the structuer.
 *
 * @age: second element of the structuer.
 *
 * @owner: third element of the structuer.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
