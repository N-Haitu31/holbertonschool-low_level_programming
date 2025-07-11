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

	/*Parcourt la chaîne source caractère par caractère jusqu'au null terminator*/
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /*Copie le caractère courant de src vers dest*/
	}
	dest[i] = '\0'; /*Ajoute le null terminator à la fin de la chaîne de destination*/
	return (dest); /*Retourne le pointeur vers la destination*/
}

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @str: Le pointeur vers la chaîne dont la longueur doit être calculée.
 * Return: La longueur de la chaîne (nbre de car.
 */

int _strlen(char *str)
{
	int len = 0;

	/*Parcourt la chaîne caractère par caractère, incrémentant 'len'*/
	/*jusqu'à ce que le null terminator soit rencontré*/
	while (str[len] != '\0')
	{
		len++;
	}
	return (len); /*Retourne la longueur calculée*/

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
	int name_len; /*Longueur du nom*/
	int owner_len; /*Longueur du propriétaire*/

	if (name == NULL || owner == NULL || age < 0)
	{
		return (NULL);
	}

	/*Calcul des longueurs des chaînes pour l'allocation (besoin de +1 pour le '\0')*/
	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	/*Allouer de la mémoire pour la structure 'dog_t' elle-même*/
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}

	/*Allouer de la mémoire pour le nom du chien et le copier*/
	my_dog->name = malloc(name_len);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->name, name); /*Copie la chaîne 'name' dans la mémoire allouée*/
	/*Allouer de la mémoire pour le propriétaire du chien et le copier*/
	my_dog->owner = malloc(owner_len);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name); /*Nettoie la mémoire allouée pour le nom (important !)*/
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->owner, owner); /*Copie la chaîne 'owner' dans la mémoire allouée*/
	/*Affecter l'âge (pas d'allocation pour les types primitifs)*/
	my_dog->age = age;
	/*Retourne le pointeur vers la nouvelle structure 'dog' si tout est réussi*/
	return (my_dog);
}
