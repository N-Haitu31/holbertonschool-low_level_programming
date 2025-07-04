#include <stdio.h>
#include <stdlib.h>

/**
 * main  - main with parameters for number and command line arguments
 * @argc : argument count
 * @argv : argument vector
 * Return: multiplies two numbers
 */

int main(int argc, char *argv[])

{
	int nb1; /*Déclare deux variables entières, res1 et res2, pour stocker les nombres à multiplier.*/
	int nb2;

	nb1 = nb2 = 0;

	/*Vérifie si le nombre d'arguments est égal à 3*/
	/*Rappel : argv[0] est le nom du programme*/
	/*Donc, argc = 3 signifie : [nom_programme, nombre1, nombre2] -> exactement deux nombres fournis*/
	if (argc == 3)
	{
		nb1 = atoi(argv[1]); /*Convertit le premier argument (argv[1]) de chaîne de caractères en entier et le stocke dans nb1*/
		nb2 = atoi(argv[2]); /*Convertit le deuxième argument (argv[2]) de chaîne de caractères en entier et le stocke dans nb2*/

		printf("%d\n", nb1 * nb2);
		return (0);
	}

	else /*Si le nombre d'arguments n'est PAS égal à 3 (donc pas deux nombres fournis)*/
	{
		printf("Error\n");
	}

	return (1);
}
