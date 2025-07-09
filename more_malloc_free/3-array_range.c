#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */

int *array_range(int min, int max)

{
	int i, taille;
	int *array;

	if (min > max) /*Gérer le cas d'erreur où l'intervalle est invalide*/
	{
		return (NULL);
	}

	/*Calculer la taille nécessaire du tableau*/
	/*La taille est déterminée par le nombre d'éléments de 'min' à 'max' inclus*/
	/*exemple: de 2 à 5, il y a (5 - 2 + 1) = 4 éléments (2, 3, 4, 5)*/
	taille = max - min + 1;

	array = malloc(taille * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < taille; i++)
	{
		/*À chaque itération, elle assigne la valeur 'min + i' à l'élément courant du tableau*/
		/*Ainsi, array[0] = min, array[1] = min + 1, ..., array[taille-1] = min + (taille-1) = max*/
		array[i] = min + i;
	}

	return (array);

}
