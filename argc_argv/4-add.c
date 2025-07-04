#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

