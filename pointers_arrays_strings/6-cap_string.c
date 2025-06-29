#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to input string.
 * Return: Returns pointer to capitalized string.
 */

char *cap_string(char *str)

{
	int w = 0;
	int capitalize_next = 1; /*Initialisé à 1 pour capitaliser la première lettre de la chaîne*/

/*Boucle pour parcourir chaque caractère de la chaîne jusqu'à la fin*/
	while (str[w] != '\0')
	{

/*Vérifie si le caractère actuel est un espace, une tabulation,...*/
		if (str[w] == ' ' || str[w] == '\t' || str[w] == '\n' ||
		str[w] == ',' || str[w] == ';' || str[w] == '.' ||
		str[w] == '!' || str[w] == '?' || str[w] == '"' ||
		str[w] == '(' || str[w] == ')' || str[w] == '{' || str[w] == '}')
		{
/*Indique que le prochain caractère doit être capitalisé*/
			capitalize_next = 1;
		}

/*Si le prochain caractère doit être capitalisé et est une lettre minuscule*/
		else if (capitalize_next && (str[w] >= 'a' && str[w] <= 'z'))
		{
/*Convertit le caractère minuscule en majuscule*/		
			str[w] = str[w] - 32;
			capitalize_next = 0; /*Réinitialise l'indicateur*/
		}

		else
		{
			capitalize_next = 0; /*Aucun changement, continuez*/
		}
		w++; /*Passe au caractère suivant de la chaîne*/
	}
	return (str); /*Renvoie la chaîne modifiée*/
}

