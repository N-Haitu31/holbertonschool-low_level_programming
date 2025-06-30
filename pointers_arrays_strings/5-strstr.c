#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to look though
 * @needle: substring to find
 * Return: pointer to string with result of search
 */

char *_strstr(char *haystack, char *needle)

{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/*Vérifie si le caractère actuel de 'haystack' (haystack[i])*/
		/*correspond au premier caractère de 'needle' (needle[0])*/
		if (haystack[i] == needle[0])
		{

/*Elle est exécutée ssi le premier caractère de 'needle' correspond*/
			for (j = 0; needle[j] != '\0'; j++)
			{

/*Compare le caractère de 'haystack' à la position (i + j)*/
/*avec le caractère de 'needle' à la position j*/
/*compare haystack à partir de i, avançant avec j*/
/*qui est notre point de départ potentiel pour 'needle'*/
				if (haystack[i + j] != needle[j])
				{

			/*Non-correspondance : sort de la boucle interne*/
					break;
				}
			}

			/*Si la fin de 'needle' est atteinte (match complet)*/
			if (needle[j] == '\0')
			{

	/*Retourne un pointeur vers le début de 'needle' dans 'haystack'*/
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
