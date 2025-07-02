 #include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */

void _print_rev_recursion(char *s)

{
	if (*s)
	{
/*Appel récursif en premier : Traite le reste de la chaîne AVANT d'afficher*/
	_print_rev_recursion(s + 1);

/*Affiche le caractère actuel : LORSQUE les appels récursifs se terminent*/
	_putchar(*s);
	}
}
