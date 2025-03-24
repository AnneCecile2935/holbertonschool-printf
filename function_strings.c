#include <stdarg.h>
#include "main.h"

/**
 * _print_pourcentage - Affiche une chaîne de caractère
 * @argument: Contient la liste des arguments variadique
 */

void _print_strings(va_list arg)
{
	char *strings = va_arg(arg, char*);
	/*if (strings != NULL)
	{
		_putchar(strings);
	}*/
	while(strings)
	{
		_putchar(*strings);
		strings++;
	}
}