#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: dog's owner.
 *
 * Return: NULL if function fails, otherwise
 * elememts of the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int d, dname, downer;

	n_dog = malloc(sizeof(*n_dog));
	if (n_dog == NULL || !(name) || !(owner))
	{
		free(n_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	n_dog->name = malloc(dname + 1);
	n_dog->owner = malloc(downer + 1);

	if (!(n_dog->name) || !(n_dog->owner))
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (d = 0; d < dname; d++)
		n_dog->name[d] = name[d];
	n_dog->name[d] = '\0';

	n_dog->age = age;

	for (d = 0; d < downer; d++)
		n_dog->owner[d] = owner[d];
	n_dog->owner[d] = '\0';

	return (n_dog);
}
