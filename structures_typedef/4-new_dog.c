#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - Copie la chaîne source dans la destination.
 * @dest: Le pointeur vers la chaîne de destination où copier.
 * @src: Le pointeur vers la chaîne source à copier.
 *
 * Return: Le pointeur vers la chaîne de destination (dest).
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @str: Le pointeur vers la chaîne dont la longueur doit être calculée.
 * Return: La longueur de la chaîne (nbre de car.
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);

}

/**
 * new_dog - Crée une nouvelle structure 'dog' et l'initialise.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len;
	int owner_len;

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}

	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc(name_len);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->name, name);
	my_dog->owner = malloc(owner_len);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
