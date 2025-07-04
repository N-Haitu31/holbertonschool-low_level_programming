#include <stdio.h>
#include <ctype.h> /*Pour isdigit (vérification de chiffres)*/
#include <stdlib.h> /*Pour atoi (conversion chaîne en entier)*/

/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])

{
	int i;
	int j = 0;
	int sum = 0;

	/*Boucle principale : parcourt tous les arguments à partir de 1*/
	/*car argv[0] sera ./mon_programme*/
	for (i = 1; i < argc; i++)
	{

		/*Boucle interne : parcourt chaque caractère de l'argument courant (argv[i])*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			/*Vérifie si le caractère courant n'est PAS un chiffre*/
			/*isdigit() retourne vrai (non-zéro) si c'est un chiffre*/
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

/*Si tous les caractères de l'argument sont des chiffres, convertit la chaîne*/
/*et ajoute cet entier à la somme*/
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

