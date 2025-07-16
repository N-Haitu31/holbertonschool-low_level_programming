#include "variadic_functions.h" /*Nécessaire pour les fonctions variadiques (va_list, va_start, va_arg, va_end)*/
#include <stdarg.h>
#include <stdio.h>

/**
  * sum_them_all - sums all arguments
  * @n: number of arguments // Le nombre d'arguments entiers supplémentaires passés à la fonction
  * //(C'est l'argument fixe qui indique combien d'éléments variables suivent).
  * @...: variable list of arguments
  * Return: sum of all arguments
  */

int sum_them_all(const unsigned int n, ...) /*Le '...' indique que la fonction accepte un nombre variable d'arguments*/
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args; /*Déclare une variable de type va_list. C'est notre "curseur"*/
		      /*ou "pointeur interne" qui va nous permettre de naviguer*/
		      /*dans la liste des arguments variables*/

	/*Première vérification de sécurité*/
	if (n == 0)
	{
		return (0);
	}

	/*Initialisation de la liste d'arguments variables :*/
	/*va_start(va_list ap, last_arg) prépare 'args' à lire les arguments variables.*/
	/*'n' est le 'last_arg' ici, c'est-à-dire le dernier argument fixe de la fonction*/
	/*va_start utilise la position de 'n' en mémoire pour trouver le début*/
	/*de la zone où sont stockés les arguments variables*/
	va_start(args, n);

	/*Boucle pour parcourir et additionner chaque argument variable :*/
	/*La boucle s'exécute 'n' fois, une fois pour chaque argument que nous attendons*/
	for (i = 0; i < n; i++)
	{
		/*Accès et extraction de l'argument courant :*/
		/*va_arg(va_list ap, type) lit le prochain argument de la liste pointée par 'args'*/
		/*Nous spécifions 'int' car nous savons que les arguments supplémentaires sont des entiers*/
		/*va_arg lit l'entier et fait avancer 'args' au prochain argument dans la liste*/
		sum += va_arg(args, int); /*Ajoute l'entier lu à notre somme*/
	}

	/*Nettoyage de la liste d'arguments variables :*/
	/*va_end(va_list ap) est cruciale. Elle doit être appelée après avoir fini*/
	/*de traiter les arguments pour nettoyer l'environnement et la variable 'args'*/
	/*Cela libère les ressources allouées en interne par va_start*/
	va_end(args);

	return (sum); /*Retourne la somme totale des arguments*/
}
