#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
  * new_dog - create a new dog
  * @name: name of the dog
  * @age: age
  * @owner: owner name
  * Return: a pointer of a new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog_ptr = malloc(sizeof(dog_t));

	if (ndog_ptr == NULL)
		return (NULL);

	ndog_ptr->name = malloc(strlen(name) + 1);

	if (ndog_ptr->name == NULL)
	{
		free(ndog_ptr);
		return (NULL);
	}
	strcpy(ndog_ptr->name, name);

	ndog_ptr->owner = malloc(strlen(owner) + 1);

	if (ndog_ptr->owner == NULL)
	{
		free(ndog_ptr->name);
		free(ndog_ptr);
		return (NULL);
	}
	strcpy(ndog_ptr->owner, owner);

	ndog_ptr->age = age;

	return (ndog_ptr);
}

