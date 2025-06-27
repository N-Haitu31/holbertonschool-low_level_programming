#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; /*Initialiser un index i à 0 pour parcourir la chaîne dest*/
	int j = 0; /*Initialiser un index j à 0 pour parcourir la chaîne src*/

	while (dest[i] != '\0') /*Boucle pour trouver la fin de la chaîne dest*/
	{
		i++; /*Incrémenter i jusqu'à atteindre le caractère nul, ce qui marque la fin de dest*/
	}

	while (src[j] != '\0') /*Boucle pour copier les caractères de src vers dest*/
	{
		dest[i] = src[j]; /*Copier le caractère actuel de src dans dest à la position finde*/

		i++; /*Passer à la position suivante dans dest*/
		j++; /*Passer à la position suivante dans src*/

	}
	dest[i] = '\0'; /*Ajouter le caractère nul à la fin de dest pour s'assurer que c'est une chaîne valide*/
	return (dest); /*Retourner le pointeur vers dest*/
}
