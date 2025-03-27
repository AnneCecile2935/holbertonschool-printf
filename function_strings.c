#include <stdarg.h>
#include "main.h"
/**
 * _print_strings - Affiche une chaîne de caractère
 * @arg: Contient la liste des arguments variadique
 * Return: On retourne le compteur du nombre de caractère
 */
int _print_strings(va_list arg)
{
	char *strings = va_arg(arg, char*); /*déclaration d'un pointeur */
	int count = 0; /*initialisation du compteur à 0*/

	if (strings == NULL)
	{
		strings = "(null)";/*renvoie "(null)" si strings est NULL*/
	}
	while (*strings) /*boucle qui parcourt la chaine et affiche les caractères un par un et incrémente le compteur pour le return*/
	{
		_putchar(*strings);
		strings++;
		count++;
	}
	return (count);
}
