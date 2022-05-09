#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Talks about poppy.
 * @name: The name of the dog
 * @age: The age
 * @owner: The owner.
 *
 * Description: This a struct made for poppy.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

#endif
