#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: segment to compare bytes from
 * @accept: string of bytes to compare with
 * Return: number of bytes in segment s which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{
/*Initialise le compteur à 0, ce sera notre résultat final*/
	unsigned int count = 0;
	int i = 0; /*Initialisation de l'indice i pour parcourir la chaîne s*/
	int j; /*Indice pour parcourir la chaîne accept*/

/*Boucle qui continue tant que nous n'avons pas atteint la fin*/
	while (s[i] != '\0')
	{
/*Boucle pour parcourir chaque caractère de la chaîne accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
/*Vérifie si le caractère courant s[i] est dans accept[j]*/
			if (s[i] == accept[j])
			{
/*Incrémente le compteur car un caractère valide est trouvé*/
				count++;
/*Passe au caractère suivant dans s*/
				i++;
/*Sort de la boucle accept car nous avons trouvé une correspondance*/
				break;
			}
		}

/*Si la fin de la chaîne accept est atteinte sans trouver de correspondance*/
		if (accept[j] == '\0')
		{
/*Sort de la boucle principale car il n'y a plus de correspondance*/
			break;
		}

	}
/*Compteur nombre de caractères valides trouvés*/
	return (count);
}
