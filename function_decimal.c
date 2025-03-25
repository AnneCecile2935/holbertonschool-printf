#include "main.h"
#include <stdarg.h>

/**
 * _print_decimal - Affiche sous forme de valeur decimal
 * @argument: Contient la liste des arguments variadique
 */

void _print_decimal(va_list arg)
{
int i;
int decimal = va_arg(arg, int);

for (i = 0; decimal != '\0')
{

}
	if (decimal < 0)
		{
			putchar ('-');
			_putchar(va_arg(arg, int));
		}
}
