#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)

{
	int heure;
	int minute;
	
	/*Boucle externe pour les heures : itère de 00 à 23*/
	for (heure = 0; heure < 24; heure++)

	{
		/*Boucle interne pour les minutes : itère de 00 à 59 pour chaque heure*/
		for (minute = 0; minute < 60; minute++)
		{
			/*Affiche le chiffre des dizaines de l'heure*/
			/*(ex: pour 05, heure / 10 = 0 ; pour 15, heure / 10 = 1)*/
			/*Affiche le chiffre des unités de l'heure*/
			/*(ex: pour 05, heure % 10 = 5 ; pour 15, heure % 10 = 5)*/
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');

			_putchar(':');

			/*Même principe que pour les heures mais pour les minutes*/
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

		}
	}

}
