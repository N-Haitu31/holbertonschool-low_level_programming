#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *pointeur;
	unsigned int len1 = 0, len2 = 0, taille_totale = 0, i, j;

	/*Gérer les pointeurs d'entrée NULL*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*Calculer la longueur de la première chaîne (s1) et (s2)*/
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	/*La taille totale nécessaire pour la nouvelle chaîne*/
	/*La taille initiale inclut toute la première chaîne (len1)*/
	taille_totale = len1;

	if (n < len2) /*Si 'n' est inférieur à la longueur de s2, on ne concatène que 'n' caractères de s2*/
		taille_totale += n;
	else /*Sinon (si 'n' est supérieur ou égal à la longueur de s2), on concatène toute la chaîne s2*/
		taille_totale += len2;

	pointeur = malloc((taille_totale + 1) * sizeof(char));/*Le '+ 1' est indispensable pour le caractère nul de fin ('\0')*/

	if (pointeur == NULL)
		return (NULL);

	/*Copier les caractères de la première chaîne (s1) dans la nouvelle chaîne*/
	/*Parcourt s1 et copie chaque caractère dans 'pointeur', en commençant à l'index 0*/
	for (i = 0; i < len1; i++)
		pointeur[i] = s1[i];

	/*Copier les caractères de la seconde chaîne (s2) dans la nouvelle chaîne*/
	/*Cette boucle copie au maximum 'n' caractères de s2, ou moins si s2 est plus courte que 'n'*/
	/*La copie commence à l'index 'len1' dans 'pointeur' (juste après la fin de s1)*/
	/*'j' est l'index pour parcourir s2, et '(len1 + j)' est l'index dans 'pointeur'*/
	for (j = 0; j < n && j < len2; j++)
		pointeur[len1 + j] = s2[j];

	/*le dernier caractère copié (len1 + j, où 'j' est la dernière valeur utilisée avant de sortir de la boucle précédente)*/
	pointeur[len1 + j] = '\0';

	return (pointeur);
}
