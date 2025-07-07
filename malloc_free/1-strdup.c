#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */

char *_strdup(char *str)

{
	unsigned int i;
	char *new_str;
	unsigned int length = 0; /*Variable pour stocker la longueur de la chaîne originale*/

	if (str == NULL)
	{
		return (NULL);
	}

	/*Calcul de la longueur de la chaîne originale*/
	/*Parcourt la chaîne 'str' jusqu'au caractère nul de fin ('\0') pour déterminer sa longueur*/
	for (i = 0; str[i] != '\0'; i++)
	{
		length++; /*Incrémente le compteur de longueur pour chaque caractère rencontré*/
	}

	/*Allocation de mémoire pour la nouvelle chaîne*/
	/*Alloue (length + 1) octets de mémoire. Le '+1' est crucial pour le caractère nul '\0'*/
	/*qui termine toute chaîne en C. 'sizeof(char)' est généralement 1, mais est explicite*/
	new_str = malloc((length + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	/*Copie des caractères de la chaîne originale vers la nouvelle chaîne*/
	/*Parcourt la chaîne 'str' (de 0 jusqu'à 'length' - 1)*/
	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i]; /*Copie le caractère courant de 'str' vers 'new_str'*/
	}

	/*Ajout du terminateur nul à la fin de la nouvelle chaîne*/
	/*C'est indispensable pour que 'new_str' soit une chaîne de caractères C valide*/
	/*et que les fonctions comme printf, strlen, etc., puissent la manipuler correctement*/
	new_str[length] = '\0';

	return (new_str);

}
