#include <stdarg.h>
#include "main.h"
/**
 * _printf - print the format
 * @format: arguments
 * Return : nothing
 */
int _printf(const char *format, ...)
{
    specifiers type[] ={
        {'c', print_char},
        {'s', _print_strings},
        {'%', _print_pourcentage},
        {'\0', NULL},
        };
        int i = 0;
        int j = 0;
        int count = 0;

        va_list arg;
        va_start(arg, format);

        while (format && format[i]) /* si le format est non nul*/
        {
            if (format[i] == '%') /* si dans la boucle on rencontre % alors on passe au caractère suivant*/
                {
                    i++;
            j = 0;
                while (type[j].entry) /* on recherche le specifieurs dans le tableau de la structure*/
                {
                    if (format[i]==type[j].entry) /* s'il y a une correspondance*/
                    {
                    type[j].print_func(arg); /* on appelle la fonction correspondante, on lui donne les arguments */
                    count++;
                    break; /* on s'arrête*/
                    }
                    j++;
                }
                }
                     else
                    {
                    _putchar(format[i]);
                    count++;
                    }
                    i++;
                    }
        _putchar('\n');
        count++;
        va_end(arg);
        return (count);
}
