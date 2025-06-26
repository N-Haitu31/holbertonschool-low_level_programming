#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: the pointer to a string
 * @src: the pointer to a buffer
 * Return: the value of the pointer to dest.
 */
char *_strcpy(char *dest, char *src)

{
	size_t i;/*size_t: variable pour indice ou les tailles*/

	for (i = 0 ; src[i] != '\0' ; i++)
	/*Parcourir src tant que vous ne rencontrez pas la fin de la chaîne*/
	{
		dest[i] = src[i];
	/*Copie les caractères de la chaîne source dans la destination avec i*/
	}

	dest[i] = '\0';
	/*indique la fin de la chaîne dans dest, ce qui est cruciale*/
	/* pour que d'autres fonctions puissent savoir où s'arrête la chaîne*/

	return (dest);
	/*retourne le pointeur vers dest, ce qui permet à l'utilisateur*/
	/* de la fonction d'obtenir la chaîne copiée*/
}
