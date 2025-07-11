#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer my_dog
  */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	if (name == NULL)
		my_dog->name = NULL;

	else
	{
		my_dog->name = strdup(name);
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
	}

	my_dog->age = age;
	if (owner == NULL)
		my_dog->owner = NULL;

	else
	{
		my_dog->owner = strdup(owner);
		if (my_dog->owner == NULL)
		{
			if (my_dog->name != NULL)
			{
				free(my_dog->name);
			}
			free(my_dog);
			return (NULL);
		}
	}
	return (my_dog);
}
