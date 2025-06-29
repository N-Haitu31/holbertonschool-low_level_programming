#include "main.h"

/**
 * leet - encodes a string into leetspeek.
 * @str: pointer to input string.
 * Return: Returns pointer to leetspeek string.
 */

char *leet(char *str)

{
/*Tableau contenant les caractères d'origine à remplacer*/
	char original[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

/*Tableau contenant les caractères de remplacement correspondants*/
	char replacement[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int elite = 0; /*Index pour parcourir la chaîne d'entrée*/
	int i = 0; /*Index pour parcourir le tableau original*/

/*Boucle principale pour parcourir la chaîne jusqu'à la fin*/
	while (str[elite] != '\0')
	{
/*Boucle pour vérifier chaque caractère de 'original'*/
		for (i = 0; i < 10; i++)
		{
/*Vérifie si le caractère actuel correspond à un caractère à remplacer*/
			if (str[elite] == original[i])
			{
			str[elite] = replacement[i]; /*Remplace le caractère*/
			break; /*Sort de la boucle une fois le remplacement effectué*/
			}
		}
	elite++; /*Passe au caractère suivant dans la chaîne*/
	}
	return (str); /*Renvoie la chaîne modifiée*/
}
