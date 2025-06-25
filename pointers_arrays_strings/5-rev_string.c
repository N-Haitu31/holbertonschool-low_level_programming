#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string to reverse
 */

void rev_string(char *s)

{
	int i = 0;
	int count = 0;
	char temp;
	int j;

	/*Calcul de la longueur de la chaîne*/
	while (s[count] != '\0')
	{
		count++;
	}
	/*Initialiser j pour qu'il pointe vers le dernier caractère*/
	j = count - 1;

	/*Inverser les caractères de la chaîne*/
	while (i < j)
	{
		temp = s[i];/*Stocker le caractère du début*/
		s[i] = s[j];/*Remplacer avec le caractère de la fin*/
		s[j] = temp;/*Remettre l'ancien début à la fin*/
		i++;/*Avancer le début vers la droite*/
		j--;/*Reculer la fin vers la gauche*/
	}
}
