#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type desribing a dog
 * @name:first member of the structure
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
