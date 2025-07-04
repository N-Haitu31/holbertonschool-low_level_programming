#include <stdio.h>
#include <stdlib.h>

/**
 * main  - main with parameters for number and command line arguments
 * @argc : argument count
 * @argv : argument vector
 * Return: 0 for succesful
 */

int main(int argc, char *argv[])

{
	int amount = 0; /*Montant à convertir en pièces*/
	int total_coins = 0; /*Compteur du nombre total de pièces utilisées*/
	unsigned int i; /*Indice pour parcourir le tableau de dénominations*/
	int coins[] = {25, 10, 5, 2, 1}; /*Tableau des dénominations de pièces*/

	/*Vérifie si le nombre d'arguments est incorrect*/
	/*Le programme attend exactement un argument (le montant), plus le nom du programme lui-même, donc argc doit être 2*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else /*Si le nombre d'arguments est correct*/
	{
		amount = atoi(argv[1]); /*Convertit le premier argument de la ligne de commande (argv[1]) en un entier*/
	        amount = atoi(argv[1]));

		if (amount < 0) /*Vérifie si le montant est négatif*/
		{
			printf("0\n"); /*Si le montant est négatif, affiche 0 pièces*/
			return (0);
		}
	}

	/*Parcourt le tableau 'coins' (de la plus grande à la plus petite dénomination)*/
	/*La condition de la boucle calcule le nombre d'éléments dans le tableau :*/
	/*sizeof(coins) est la taille totale du tableau en octets*/
	/*sizeof(coins[0]) est la taille d'un seul élément (un int) en octets*/
	/*La division donne le nombre d'éléments.*/
	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		while (amount >= coins[i]) /*Tant que le montant restant est supérieur ou égal à la pièce courante*/
        	while (amount >= coins[i])
		{
			amount -= coins[i]; /*Soustrait la valeur de la pièce du montant restant*/
			total_coins++; /*Incrémente le compteur de pièces*/
		}
	}

	printf("%d\n", total_coins); /*Affiche le nombre total de pièces calculé*/
	return (0);
}
