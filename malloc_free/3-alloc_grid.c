#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-D integer grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */

int **alloc_grid(int width, int height)
{
	int i, j; /*Variables d'itération pour les boucles (lignes et colonnes)*/
	int **grid; /*Déclare un pointeur de pointeur d'entiers. Ce sera notre grille 2D*/

	if (width <= 0 || height <= 0) /*Une grille ne peut pas avoir une largeur nulle ou négative, ni une hauteur nulle ou négative*/
	{
		return (NULL);
	}

	/*Allouer la première dimension : le tableau de pointeurs de lignes*/
	/*'malloc' alloue de la mémoire pour 'height' pointeurs de type 'int* */
	/*Chaque 'int *' pointera plus tard vers le début d'une ligne d'entiers*/
	grid = malloc(height * sizeof(int *));

	/*Vérifier si l'allocation initiale a échoué*/
	/*Si 'malloc' n'a pas pu allouer la mémoire pour le tableau de pointeurs, il retourne NULL*/
	if (grid == NULL)
	{
		return (NULL);
	}

	/*Allouer chaque ligne de la grille*/
	/*Boucle à travers chaque "ligne" du tableau de pointeurs*/
	for (i = 0; i < height; i++)
	{
		/*Pour chaque ligne, alloue de la mémoire pour 'width' entiers*/
		/*C'est la mémoire réelle qui stockera les données de chaque ligne*/
		grid[i] = malloc(width * sizeof(int));

		/*Gérer les échecs d'allocation d'une ligne individuelle*/
		/*Si l'allocation de la ligne courante (grid[i]) échoue, il faut nettoyer*/
		if (grid[i] == NULL)
		{
			/*Libère toutes les lignes précédentes qui ont été allouées avec succès*/
			/*Cela empêche les fuites de mémoire*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]); /*Libère la mémoire de la ligne 'j'*/
			}

			free(grid); /*Libère ensuite le tableau principal de pointeurs lui-même*/
			return (NULL); /*Retourne NULL pour signaler l'échec total de la fonction*/
		}
	}

	/*Initialiser toutes les cellules de la grille à zéro*/
	/*Parcourt chaque ligne de la grille*/
	for (i = 0; i < height; i++)
	{
		/*Pour chaque ligne, parcourt chaque colonne*/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0; /*Définit la valeur de la cellule courante à 0*/
		}
	}

	/*Retourner le pointeur vers la grille allouée et initialisée*/
	/*La grille est maintenant prête à être utilisée*/
	/*N'oubliez pas : c'est la responsabilité de la fonction appelante de libérer cette mémoire*/
	/*(en appelant 'free' sur chaque ligne puis sur 'grid' lui-même)*/
	/*une fois que la grille n'est plus nécessaire, afin d'éviter les fuites de mémoire*/
	return (grid);
}
