#include "main.h"

/**
 * _sqrt_recursion - checks the input number from n to the base
 * @n: number is squared and compared against base
 * Return: natural square root of number base
 */

int _sqrt_recursion(int n)
/*Fonction principale : calcule la racine carrée entière récursivement*/

{
	if (n < 0) /*Si n est négatif, la racine carrée n'est pas réelle*/
	{
		return (-1); /*Retourne -1 pour signaler une erreur*/
	}

	else if (n == 0) /*Si n est 0, sa racine carrée est 0*/
	{
		return (0);
	}

	else /*Pour les nombres positifs (n > 0)*/
	{

/*Appelle la fonction auxiliaire, commençant la recherche du candidat à 1*/
		return (_sqrt_recursion_helper(n, 1));
	}
}

/**
 * _sqrt_recursion_helper - return the natural square root of a number n.
 * @n: number to check for square roots.
 * @candidate: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion_helper(int n, int candidate)
/*Fonction auxiliaire : recherche récursivement la racine*/

{
	/*Cas de base 1 (succès) : Si le carré du candidat est égal à n*/
	if (candidate * candidate == n)
	{
		return (candidate);/*Le candidat est la racine carrée, le retourne*/
	}

	/*Cas de base 2 (échec) : Si le carré du candidat dépasse n*/
	else if (candidate * candidate > n)
	{
		return (-1);/*Signale qu'aucune racine carrée entière n'a été trouvée*/
	}

	/*Appel récursif : Le candidat est trop petit, continue la recherche*/
	else
	{
	/*Incrémente le candidat et rappelle la fonction pour le prochain essai*/
		return (_sqrt_recursion_helper(n, candidate + 1));
	}
}
