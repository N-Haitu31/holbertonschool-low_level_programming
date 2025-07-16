#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int is_first = 1; /*Drapeau (flag) pour savoir si le nombre actuel est le premier*/
			  /*On n'imprime pas de séparateur avant le tout premier nombre*/
			  /*Initialisé à 1 (vrai) pour la première itération*/

	va_list args; /*Déclare une variable de type va_list. C'est notre "curseur"*/
		      /*ou "pointeur interne" qui va nous permettre de naviguer*/
		      /*dans la liste des arguments variables*/

	va_start(args, n); /*'n' est le 'last_arg' ici, ce qui signifie que c'est le dernier argument fixe*/
			   /*avant que la liste variable ne commence. va_start utilise l'adresse mémoire de 'n'*/
			   /*pour trouver le point de départ des arguments variables*/

	for (i = 0; i < n; i++)
	{
		/*Récupération de l'argument variable actuel :*/
		/*va_arg(va_list ap, type) extrait le prochain argument de la liste*/
		/*pointée par 'args'. Nous spécifions 'int' comme type car nous attendons*/
		/*des entiers. va_arg lit l'entier et fait avancer 'args' au prochain*/
		/*argument dans la liste*/
		int number = va_arg(args, int);

		/*Impression conditionnelle du séparateur :*/
		/*Cette condition vérifie deux choses :*/
		/*1. '!is_first': Est-ce que ce N'EST PAS le premier nombre ? (c'est-à-dire, is_first est 0/faux)*/
		     /*Ceci garantit qu'aucun séparateur n'est imprimé avant le tout premier nombre*/
		/*2. 'separator != NULL': Une chaîne de séparateur est-elle réellement fournie ?*/
		     /*On ne veut pas essayer d'imprimer un séparateur NULL*/
		if (!is_first && separator != NULL)
		{
			printf("%s", separator);
		}

		printf("%d", number);

		/*Mise à jour du drapeau 'is_first' :*/
		/*Après avoir imprimé le premier nombre, on met 'is_first' à 0 (faux).*/
		/*Cela garantit que pour tous les nombres suivants, la condition du sépa    rateur*/
		/*('!is_first') sera vraie, permettant au séparateur d'être imprimé.*/
		is_first = 0;
	}
	printf("\n");

	va_end(args);
}
