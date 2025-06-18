#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase,
 * and uppercase
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	/*declare a variable*/
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		/*print the value of the variable*/

		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)

	{
		putchar(alphabet);

	}

	putchar('\n');

	return (0);
}
