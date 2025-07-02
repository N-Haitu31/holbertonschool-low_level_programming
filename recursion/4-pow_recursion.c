#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number
 * @y: power of
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)

{
	if (y < 0) /*Vérifiez si y est inférieur à 0*/
	{
		return (-1); /*Retourner -1 en cas d'exposant négatif*/
	}

	if (y == 0) /*Cas de base pour y égal à 0*/
	{
		return (1); /*Tout nombre élevé à la puissance zéro est 1*/
	}

	/*Appel récursif pour les cas où y est positif*/
	/* ( -1 ) est utilisé pour réduire la puissance à récursion -> (y)=0*/
	return (x * _pow_recursion(x, y - 1));
}
