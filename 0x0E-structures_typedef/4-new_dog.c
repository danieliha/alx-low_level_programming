#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Snap;
	int i, lname, lowner;

		Snap = malloc(sizeof(*Snap));
	if (Snap == NULL || !(name) || !(owner))
	{
		free(Snap);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	Snap->name = malloc(lname + 1);
	Snap->owner = malloc(lowner + 1);

	if (!(Snap->name) || !(Snap->owner))
	{
		free(Snap->owner);
		free(Snap->name);
		free(Snap);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		Snap->name[i] = name[i];
	Snap->name[i] = '\0';

	Snap->age = age;


		Snap->owner[i] = owner[i];
	Snap->owner[i] = '\0';

	return (Snap);
}
