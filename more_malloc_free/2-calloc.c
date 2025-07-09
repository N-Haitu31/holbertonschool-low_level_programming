#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory for an initialized buffer
  * @nmemb: number of memory bytes
  * @size: number of data type bits
  * Return: return pointer to initialized buffer
  */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int i;
	char  *pointeur;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointeur = malloc(nmemb * size);

	if (pointeur == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		pointeur[i] = 0;
	}

	return (pointeur);
}
