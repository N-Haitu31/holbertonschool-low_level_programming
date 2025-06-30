#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to search through
 * @accept: array of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or return NULL if no bytes are found.
 */

char *_strpbrk(char *s, char *accept)

{
	int i = 0; /*index pour parcourir la chaîne s*/
	int j = 0; /*index pour parcourir la chaîne accept*/

	for (i = 0; s[i] != '\0'; i++) /*Parcourir chaque caractère de la chaîne s*/
	{
		for (j = 0; accept[j] != '\0'; j++) /*chaîne accept*/
		{
			if (s[i] == accept[j]) /*condition de comparaison*/
			{
				return (s + i); /*opération d'arithmétique*/
/*de pointeur qui retourne un * vers le caractère s[i] dans la chaîne*/
/*s est un * vers le début de la chaîne & i est l'index du caractère qui */
/*a matché*/
			}
		}

	}
	return (NULL);
}
