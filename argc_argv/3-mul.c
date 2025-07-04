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
	int nb1;
	int nb2;

	nb1 = nb2 = 0;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);

		printf("%d\n", nb1 * nb2);
		return (0);
	}

	else
	{
		printf("Error\n");
	}

	return (1);
}
