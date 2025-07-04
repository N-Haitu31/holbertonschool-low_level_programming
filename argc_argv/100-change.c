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
	int amount = 0;
	int total_coins = 0;
	long unsigned int i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		amount = atoi(argv[1]);

		if (amount < 0)
		{
			printf("0\n");
			return (0);
		}
	}

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			total_coins++;
		}
	}

	printf("%d\n", total_coins);
	return (0);
}
