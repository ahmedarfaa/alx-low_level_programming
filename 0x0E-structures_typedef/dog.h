#ifndef DOG_H
#define DOG_H

/**
 * struct dog - E
 * @name: dog
 * @age: ..
 * @owner: ..
 * Description: ..
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int len(const char *s);
void free_dog(dog_t *d);

#endif
