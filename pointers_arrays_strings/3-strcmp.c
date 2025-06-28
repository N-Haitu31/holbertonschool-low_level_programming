#include "main.h"

/**
 * _strcmp - compares two strings, ending at the first byte that is different.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first character that are not the same
 */

int _strcmp(char *s1, char *s2)

{
	int i = 0;/*Initialise un compteur pour parcourir les chaînes s1 et s2*/

	/*Boucle continue tant que les caractères de s1 et s2 ne sont pas terminés*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i]) /*Si les caractères aux indices i */
				    /*des deux chaînes ne sont pas égaux*/
		{
			return (s1[i] - s2[i]); /*Retourne la différence entre*/
					/* les caractères, indiquant leur ordre*/
		}
	i++; /*Incrémente le compteur pour passer au prochain caractère*/

	}

	if (s1[i] != '\0') /*Vérifie si s1 a encore des caractères restants*/
	{
		return (s1[i]); /*Retourne le premier caractère restant de s1*/
	}

	else if (s2[i] != '\0') /*Vérifie si s2 a des caractères restants*/
	{
		return (-s2[i]); /*Retourne le premier caractère restant de s2,*/
			/* en inversant le signe pour montrer qu'il est "moins"*/
	}

	return (0);/*Si les deux chaînes sont identiques jusqu'à la fin, retourne 0*/
}
