#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @str : pointer to the string to convert
 * Return: the converted string.
 */

char *string_toupper(char *str) /*Déclaration de la fonction qui*/
			/* prend un pointeur vers une CHAINE DE CARACTERES*/

{
	int letter = 0;

	while (str[letter] != '\0') /*Boucle jusqu'à ce que l'on*/
				    /*atteigne la fin de la chaîne*/
	{
		if  (str[letter] >= 97 && str[letter] <= 122) /*Vérification si le caractère est une lettre minuscule (ASCII)*/
		{
			str[letter] = str[letter] - 32; /*Conversion du caractère en majuscule en soustrayant 32 cf. Tableau ASCII: ex: 'a' (97) et 'A' (65) : 97−65=32*/
		}

	letter++;
	}

	return (str);/*Retourner la chaîne convertie en majuscules*/
}
