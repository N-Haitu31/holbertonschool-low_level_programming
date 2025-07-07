#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array of chars
 */

char *create_array(unsigned int size, char c)

{
	char *array; /*Déclare un pointeur vers un caractère, qui pointera vers le début du tableau alloué*/
	unsigned int i; /*Déclare une variable pour l'index de la boucle*/

	if (size == 0) /*Il n'est pas logique d'allouer un tableau de taille nulle*/
	{
		return (NULL);
	}

	/*Alloue dynamiquement de la mémoire pour le tableau*/
	/*'size * sizeof(char)' calcule la quantité totale d'octets nécessaires*/
	/*(sizeof(char) est garanti d'être 1 octet, mais il est bonne pratique de l'inclure)*/
	array = malloc(size * sizeof(char));

	if (array == NULL) /*Vérifie si l'allocation mémoire a échoué (par exemple, pas assez de mémoire disponible)*/
	{
		return (NULL);
	}

	for (i = 0; i < size; i++) /*Parcourt le tableau du début à la fin*/
	{
		array[i] = c; /*Initialise chaque élément du tableau avec le caractère 'c' fourni*/
	}

	return (array); /*Retourne le pointeur vers le tableau alloué et initialisé*/
}
