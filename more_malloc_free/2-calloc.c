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
	char  *pointeur; /*'char' est garanti de faire 1 octet*/
			 /*ce qui nous permet d'accéder et d'initialiser chaque octet individuellement*/

	if (nmemb == 0 || size == 0) /*Gérer les cas d'entrée invalides*/
	{
		return (NULL);
	}

	/*Le type de retour de malloc est 'void *', qui est implicitement converti*/
	/*en 'char *' pour notre pointeur en C*/
	pointeur = malloc(nmemb * size);

	if (pointeur == NULL) /*Vérifier si l'allocation mémoire a échoué*/
	{
		return (NULL);
	}

	/*Initialiser tous les octets alloués à zéro*/
	/*Elle commence à l'index 0 et va jusqu'à (nmemb * size) - 1*/
	/*Grâce au 'char *pointeur', 'pointeur[i]' accède précisément à un octet à la fois*/
	for (i = 0; i < (nmemb * size); i++)
	{
		pointeur[i] = 0;
	}

	return (pointeur);
}
