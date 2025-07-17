#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/*--- Définition du type de pointeur de fonction ---*/
/*Ceci crée un alias 'print_fn' pour un pointeur vers une fonction qui :*/
/*- ne retourne rien (void)*/
/*- prend un seul argument de type va_list*/
typedef void (*print_fn)(va_list args);

/**
  * print_char - prints characters
  * @args: character to print
  */

/*va_arg récupère le prochain argument de la liste 'args' et l'interprète comme un 'int'.*/
/*Les 'char' sont promus en 'int' lors du passage dans une fonction variadique.*/
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
  * print_int - prints integers
  * @args: integer to print
  */

  /*va_arg récupère le prochain argument de la liste 'args' et l'interprète comme un 'int'.*/
void print_int(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
  * print_float - prints float
  * @args: integer to print
  */

/*va_arg récupère le prochain argument de la liste 'args' et l'interprète comme un 'double'.*/
/*Les 'float' sont promus en 'double' lors du passage dans une fonction variadique.*/
void print_float(va_list args)
{
	double f = va_arg(args, double);

	printf("%f", f);
}

/**
  * print_string - prints string
  * @args: integer to print
  */

/*va_arg récupère le prochain argument de la liste 'args' et l'interprète comme un 'char *' (pointeur de chaîne).*/
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

		if (s == NULL)
		{
			s = "(nil)";
		}
	printf("%s", s);
}

/*--- Tableaux de correspondance ---*/
/*Ce tableau contient les pointeurs vers les fonctions d'impression.*/
/*L'ordre est important car il correspond aux caractères de 'types'.*/
print_fn print_functions[] = {
	print_char, print_int, print_float, print_string
};

/*Ce tableau contient les caractères de format correspondant aux fonctions ci-dessus.*/
/*C'est le "dictionnaire" qui relie un caractère à une fonction.*/
char types[] = {'c', 'i', 'f', 's', '\0'};

/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */

void print_all(const char *const format, ...)
{
	va_list args; /*Déclare une variable pour gérer la liste des arguments variables*/
	int i = 0; /*Index pour parcourir la chaîne 'format'*/
	int j = 0; /*Index pour parcourir le tableau 'types' et 'print_functions'*/
	char *separator = ""; /*Pointeur vers la chaîne séparatrice, initialisé à vide pour le premier élément*/*/

	/*Initialise la liste d'arguments. 'args' pointera vers le premier argument*/
	/*après l'argument nommé 'format'.*/
	va_start(args, format);

	/*Boucle principale : parcourt chaque caractère de la chaîne 'format'*/
	while (format != NULL && format[i] != '\0')
	{
		j = 0; /*Réinitialise l'index 'j' pour chaque nouveau caractère de 'format'*/
		/*Boucle interne : parcourt le tableau 'types' pour trouver une correspondance*/
		while (types[j] != '\0')
		{
			if (format[i] == types[j]) /*Si le caractère actuel du 'format' correspond à un type connu dans 'types'*/
			{
				printf("%s", separator); /*Imprime le séparateur (vide pour le 1er élément, ", " ensuite)*/

				/*Appelle la fonction d'impression appropriée en utilisant l'indice 'j'*/
				/*qui correspond au type trouvé.*/
				print_functions[j](args);
				separator = ", "; /*Après avoir imprimé un élément, le séparateur devient ", "*/
				break; /*Sort de la boucle interne car le type a été traité*/
			}
			j++; /*Passe au type suivant dans le tableau 'types'*/
		}
		i++; /*Passe au caractère de format suivant*/
	}

	va_end(args); /*Nettoie la liste d'arguments variables. Très important pour éviter les fuites de mémoire.*/
	printf("\n");
}
