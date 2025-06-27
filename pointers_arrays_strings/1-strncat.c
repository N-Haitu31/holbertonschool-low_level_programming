#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to print
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /*Initialiser un index i à 0 pour parcourir la chaîne dest*/
	int j = 0; /*Initialiser un index j à 0 pour parcourir la chaîne src*/

	/*Boucle pour trouver la fin de la chaîne dest*/
	while (dest[i] != '\0')
	{
		i++; /*Incrémenter i jusqu'à la fin de dest*/
	}

	/*Boucle pour copier les caractères de src vers dest*/
	/*jusqu'à n caractères ou jusqu'à atteindre la fin de src*/
	while ((j < n) && src[j] != '\0')
	{
		dest[i + j] = src[j]; /*Copier le caractère actuel de src dans dest*/
		j++;
	}

	dest[i + j] = '\0'; /*Ajouter le caractère nul à la fin de dest pour terminer la chaîne*/
	return (dest); /*Retourner le pointeur vers dest*/
}
