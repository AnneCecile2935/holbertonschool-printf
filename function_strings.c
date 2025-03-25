#include <stdarg.h>
#include "main.h"

/**
 * _print_strings - Affiche une chaîne de caractère
 * @arg: Contient la liste des arguments variadique
 */

void _print_strings(va_list arg)
{
	char *strings = va_arg(arg, char*);

	if (strings != NULL)
	{
	while (*strings)
	{
		_putchar(*strings);
		strings++;
	}
	}
}
