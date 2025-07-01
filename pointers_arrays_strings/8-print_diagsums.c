#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to 2D array.
 * @size: which diagonal to add.
 */

void print_diagsums(int *a, int size)

{
	int i = 0;
	int sum1 = 0; /*Somme de la diagonale principale (haut-gauche à bas-droite)*/
	int sum2 = 0; /*Somme de la diagonale secondaire (haut-droite à bas-gauche)*/

	for (i = 0; i < size; i++) /*Pour parcourir les 'size' lignes/colonnes*/
	{

	/*Tableau 1D, l'élément (i,i) est à l'index i * size + i*/
	sum1 += a[i * size + i];

/*Tableau 1D, (i, size - 1 - i) est à (i * size + (size - 1 - i)).*/
	sum2 += a[i * size + (size - 1 - i)];
	}

	/*Affiche les deux sommes, séparées par une virgule*/
	printf("%d, %d\n", sum1, sum2);

}
