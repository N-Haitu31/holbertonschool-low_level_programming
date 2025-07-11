#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - prints the dog struct
  * @d: pointer to the dog struct
  */

void print_dog(struct dog *d)
{
	/*--- 1. Vérification du pointeur de la structure principale ---*/
	/*Si le pointeur 'd' lui-même est NULL,*/
	/*cela signifie qu'aucune structure 'dog' valide n'a été passée à la fonction*/
	if (d == NULL)
	{
		return; /*Puisque c'est une fonction 'void' (qui ne retourne aucune valeur)*/
	}

	/*Le champ 'name' est un 'char *', c'est-à-dire un pointeur vers une chaîne de caractères. D'où le 'd->name'*/
	if (d->name == NULL)
	{
		printf("Name: (nil)\n"); /*À la place, on affiche une chaîne de caractères indiquant que le nom est "null"*/
					 /*ou non défini, ici "(nil)", ce qui est une convention courante.*/
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
