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
        int j;

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

                }break; /* on s'arrête*/
                j++;
            }
                }
        
       _putchar(format[i]);
        i++;
            }
        _putchar('\n');
        va_end(arg);
        return (0);
}
