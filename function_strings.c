#include <stdarg.h>
#include "main.h"
/**
 * _print_strings - Affiche une chaîne de caractère
 * @arg: Contient la liste des arguments variadique
 * Return: On retourne le compteur du nombre de caractère
 */
int _print_strings(va_list arg)
{
	char *strings = va_arg(arg, char*);
	int count = 0;
	if (!strings)
	strings = "(null)";
		while (*strings)
	{
		_putchar(*strings);
		strings++;
		count++;
	}
	return (count);
}
