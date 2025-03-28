#include <stdarg.h>
#include "main.h"
/**
* _printf - print the format
* @format: arguments
* Return: count number of characters
*/
int _printf(const char *format, ...)
{
specifiers type[] = {
{'c', print_char}, {'s', _print_strings},
{'%', _print_pourcentage}, {'d', print_int}, {'i', print_int}, {'\0', NULL},};
int i = 0;
int j;
int count = 0;
va_list arg;/*déclaration var argument*/
va_start(arg, format);/*initialisation de l'argument*/
if (format == NULL)
	return (-1);
while (format && format[i]) /* si le format est non nul, boucle qui parcourt le format*/
	{
		if (format[i] == '%')
		{
		i++;
		for (j = 0; type[j].entry; j++)/*boucle qui permet de parcourir la structure*/
			{
				if (format[i] == type[j].entry) /* s'il y a une correspondance*/
			{
		count += type[j].print_func(arg);/* appel de la fonction et ajout au compteur*/
		break; /* on s'arrête*/
		}
		}
			if (!type[j].entry)/* si pas de correspondance*/
		{
			_putchar ('%');
			_putchar (format[i]);
			count += 2;
		}
	}
	else
	{
		_putchar(format[i]); /*on affiche les caractères normaux*/
		count++;
	}
		i++;
	}
	va_end(arg);/*libère l'argument*/
	return (count);/*retour du compteur du nombre de caractère*/
}
