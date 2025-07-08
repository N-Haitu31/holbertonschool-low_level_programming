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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	taille_totale = len1;

	if (n < len2)
		taille_totale += n;
	else
	{
		taille_totale += len2;
	}

	pointeur = malloc((taille_totale + 1) * sizeof(char));

	if (pointeur == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		pointeur[i] = s1[i];

	for (j = 0; j < n && j < len2; j++)
		pointeur[len1 + j] = s2[j];

	pointeur[len1 + j] = '\0';

	return (pointeur);
}
