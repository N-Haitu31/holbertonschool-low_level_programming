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
	int j = 0;
	int nombre1, nombre2, produit;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	while (argv[1][j] != '\0')
	{
		if (argv[1][j] < '0' || argv[1][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
	j++;
	}

	while (argv[2][j] != '\0')
	{
		if (argv[2][j] < '0' || argv[2][j] > '9')
		{
		printf("Error\n");
		return (1);
		}
	j++;
	}

	nombre1 = atoi(argv[1]);
	nombre2 = atoi(argv[2]);
	produit = nombre1 * nombre2;

	printf("%d\n", produit);

	return (0);
}

