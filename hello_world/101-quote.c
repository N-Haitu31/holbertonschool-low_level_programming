#include <stdio.h>

/**
 * main - print "and that piece of art is useful
 * " - Dora Korpar, 2015-10-19
 * followed by a new line.
 *
 * Return: 1
 */

int main(void)
{
	write(stderr, "and that piece of art is useful\" -
			Dora Korpar, 2015-10-19\n", "string format", 59);

	return (1);
}
