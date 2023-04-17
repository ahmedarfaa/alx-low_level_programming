#include "dog.h"
#include <stdlib.h>

/**
 * len - E
 * @s: ..
 * Return: l.
 */

int len(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * copy - E
 * @d: ..
 * @s: ..
 * Return: d.
 */

char copy(char *d, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		d[i] = s[i];
	d[i] = '\0';

	return (d);
}

/**
 * new_dog - E
 * @name: ..
 * @age: ..
 * @owner: ..
 * Return: dependes
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dot_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = copy(dog->name, name);
	dog->age = age;
	dog->owner = len(dog->owner, owner);

	return (dog);

}
