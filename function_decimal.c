#include "main.h"
#include <stdarg.h>

/**
 * _print_decimal - Affiche sous forme de valeur decimal
 * @argument: Contient la liste des arguments variadique
 */

void _print_decimal(va_list arg)
{
int decimal = va_arg(arg, int);

	if (decimal < 0)
		{
			putchar ('-');
			decimal = -decimal;
		}
	if (decimal == 0)
		{
			_putchar('0');
			return;
		}
}
