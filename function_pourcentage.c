#include <stdarg.h>
#include "main.h"

/**
 * _print_pourcentage - Affiche en pourcentage
 * @argument: Contient la liste des arguments variadique
 */

void _print_pourcentage(va_list arg)
{
	int pourcentage = va_arg(arg, int);
	_putchar(pourcentage);
}
