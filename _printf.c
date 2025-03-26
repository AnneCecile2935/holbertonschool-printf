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
{'%', _print_pourcentage}, {'\0', NULL},};
int i = 0;
int j;
int count = 0;
int retour;
va_list arg;
va_start(arg, format);
while (format && format[i]) /* si le format est non nul*/
{
if (format[i] == '%')
{
i++;
for (j = 0; type[j].entry; j++)
{
if (format[i] == type[j].entry) /* s'il y a une correspondance*/
{
retour = type[j].print_func(arg);
count += retour;
break; /* on s'arrête*/
}
}
if (!type[j].entry)
{
_putchar ('%');
_putchar (format[i]);
count += 2;
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(arg);
return (count);
}
