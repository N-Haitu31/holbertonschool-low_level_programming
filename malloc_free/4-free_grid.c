#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid previously created by alloc_grid
 * @grid: pointer to grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)

{
	int i;

	if (grid == NULL) /*Vérification de sécurité : Gérer le cas où la grille est NULL*/
	{
		return;
	}

	/*Libérer la mémoire de chaque ligne individuelle de la grille*/
	/*On boucle de 0 jusqu'à 'height - 1' (le nombre total de lignes)*/
	/*Chaque 'grid[i]' est un pointeur vers une ligne d'entiers qui a été allouée séparément*/
	for (i = 0; i < height; i++)
	{
		/*Libère la mémoire de la ligne courante*/
		/*Il est crucial de libérer les "enfants" (les lignes) avant le "parent" (le tableau de pointeurs)*/
		free(grid[i]);
	}

	/*Libérer la mémoire du tableau principal de pointeurs*/
	/*Une fois que toutes les lignes individuelles ont été libérées,*/
	/*on peut libérer la mémoire qui contenait les pointeurs vers ces lignes*/
	free(grid);
}
