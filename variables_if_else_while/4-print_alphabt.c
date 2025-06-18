#include <stdio.h>

/**
 * main - Print the alphabet in lowercase except q and e.
 *
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




	if
		(alphabet == 'q' || alphabet == 'e')

	{

	continue;

	}
		putchar(alphabet);
	}
		putchar('\n');

	return (0);
}
