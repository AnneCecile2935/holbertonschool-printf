#include <stdarg.h>
#include "main.h"
/**
 * _print_pourcentage - Affiche en pourcentage
 * @arg: Contient la liste des arguments variadique
 * Return: On retourne le nombre de caractère qui correspond au %,
 * le chiffre 1 fait office de quantité, donc 1.
 */
int _print_pourcentage(va_list arg)
{
	(void)arg;
	 _putchar('%');
	if (!'%')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
