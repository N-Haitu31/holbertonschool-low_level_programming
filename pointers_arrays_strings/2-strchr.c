#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0') /*Itérez à travers la chaîne*/
	{

/*Vérifiez si le caractère actuel est celui que nous recherchons*/
		if (*s == c)
		{
			return (s); /*Retournez l'adresse du caractère trouvé*/
		}
		s++; /*Déplacez-vous au caractère suivant*/
	}

	if (*s == c) /*Gérer le cas où c est le caractère nul*/
	{
		return (s); /*Retournez l'adresse du caractère nul*/
	}

	return (NULL); /*Retournez NULL si le caractère n'est pas trouvé*/
}
