#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)

{
	unsigned int result = 0;
/*stocke le nombre entier final que la fonction retournera. Il est initialisé à 0.*/
	int sign = 1;
/*utilisé pour déterminer si le nombre sera positif ou négatif*/
/*Il commence à 1, ce qui signifie que le nombre est positif par défaut.*/
	int i = 0;
	int digit;
/*pour stocker la valeur numérique d'un caractère de chiffre.*/


/*boucle continue tant que les caractères dans la chaîne ne sont pas*/
/* des chiffres ou le caractère de fin de chaîne \0*/
/*Cela signifie qu'elle va ignorer les caractères non numériques au début de la chaîne*/
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')/*Si elle rencontre le caractère '-',*/
	/* elle multiplie sign par -1, indiquant que le résultat final sera négatif.*/
		{
			sign *= -1;
		}
	i++;
	}
/*boucle continue tant qu'elle ne rencontre pas le caractère de fin de chaîne \0*/
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
/*elle convertit ce caractère en son équivalent numérique en soustrayant*/
/* '0' à partir de l'ASCII du caractère.*/

			result = result * 10 + digit;
/*Le nombre est construit en déplaçant result d'un chiffre vers la gauche*/
/* (en le multipliant par 10) et en ajoutant digit.*/
		}

		else
/*Si elle rencontre un caractère qui n'est pas un chiffre, elle sort de la boucle*/
		{
			break;
		}
	}
	result *= sign;
/*Après avoir extrait tous les chiffres, result est multiplié par sign*/
/* pour appliquer le signe déterminé au début.*/
	return (result);
}

