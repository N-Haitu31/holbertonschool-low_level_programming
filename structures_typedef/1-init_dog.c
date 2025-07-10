#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * init_dog - initialize struct dog.
  * @d: name of struct
  * @name: name of dog in struct
  * @age: age of dog in struct
  * @owner: name of owner of dog in struct
  */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	/*Vérification de sécurité*/
	/*On s'assure que le pointeur 'd' (vers la structure dog) n'est pas NULL.*/
	/*Si 'd' est NULL, cela signifie que la fonction a été appelée sans*/
	/*une structure valide à initialiser, ou qu'une allocation précédente a échoué.*/
	/*Tenter d'accéder aux membres de 'd' (comme d->name) si 'd' est NULL*/
	/*provoquerait un plantage du programme (erreur de segmentation).*/
	if (d == NULL)
	{
		/*Si 'd' est NULL, la fonction ne peut pas procéder à l'initialisation.*/
		/*Puisque la fonction est de type 'void' (ne retourne aucune valeur),*/
		/*un simple 'return;' met fin à son exécution.*/
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
