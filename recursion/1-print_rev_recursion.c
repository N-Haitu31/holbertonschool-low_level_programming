  1 #include "main.h"
  2
  3 /**
  4  * _print_rev_recursion - prints a string in reverse
  5  * @s: the string to print
  6  */
  7                                                                                           8 void _print_rev_recursion(char *s)                                                        9                                                                                          10 {                                                                                        11         if (*s != '\0')
 12         {
 13 /*Appel récursif en premier : Traite le reste de la chaîne AVANT d'afficher*/
 14                 _print_rev_recursion(s + 1);
 15
 16 /*Affiche le caractère actuel : LORSQUE les appels récursifs se terminent*/
 17                 _putchar(*s);
 18         }
 19 }  
