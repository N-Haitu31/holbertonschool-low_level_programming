#include "main.h"

/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	/*Boucle pour copier les caractères de src à dest*/
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];/*Copier le caractère actuel de src dans dest*/
		j++;
	}

	/*Remplir les positions restantes dans dest avec des caractères nuls*/
	while (j < n)
	{
		dest[j] = '\0';/*Mettre '\0' à la position actuelle dans dest*/
		j++;
	}

	return (dest);/*Retourner le pointeur vers dest*/
}
