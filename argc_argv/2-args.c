#include <stdio.h>

/**
 * main  - main with parameters for number and command line arguments
 * @argc : argument count
 * @argv : argument vector
 * Return: natural square root of number base
 */

int main(int argc, char *argv[])

{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
