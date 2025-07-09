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

	if (min > max)
	{
		return (NULL);
	}

	taille = max - min + 1;

	array = malloc(taille * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < taille; i++)
	{
		array[i] = min + i;
	}

	return (array);

}
