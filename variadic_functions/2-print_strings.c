#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int is_first = 1; /*Drapeaux pour gérer l'affichage du séparateur*/
	va_list args;
	char *current_string; /*Pointeur pour stocker la chaîne de caractères récupérée*/

	if (separator == NULL)
	{
		separator = ""; /*Si NULL, on utilise une chaîne vide comme séparateur*/
	}

	/*Initialiser la liste des arguments variables*/
	/*'args' va pointer vers le premier argument variable après 'n'*/
	va_start(args, n);

	/*Boucler 'n' fois pour récupérer et afficher chaque chaîne*/
	for (i = 0; i < n; i++)
	{
		/*Récupérer l'argument variable suivant. On s'attend à ce que ce soit un 'char *'*/
		current_string = va_arg(args, char *);

		/*Gérer l'affichage du séparateur*/
		/*On n'affiche le séparateur que si ce n'est PAS le premier élément*/
		if (!is_first) /*Équivalent à is_first == 0*/
		{
			printf("%s", separator);
		}

		/*Gérer le cas où la chaîne récupérée est NULL*/
		if (current_string == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", current_string);
		}

		/*Après le premier élément affiché, on marque que ce n'est plus le premier*/
		/*Cela garantit que le séparateur sera affiché avant les éléments suivants*/
		is_first = 0;
	}

	va_end(args);
	printf("\n");
}
