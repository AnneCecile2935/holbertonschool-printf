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
int j = 0;
va_list arg;
va_start(arg, format);
while (format && format[i]) /* si le format est non nul*/
{
if (format[i] == '%')
{
i++;
j = 0;
while (type[j].entry)
{
if (format[i] == type[j].entry) /* s'il y a une correspondance*/
{
type[j].print_func(arg);
break; /* on s'arrête*/
}
j++;
}
}
else
{
_putchar(format[i]);
}
i++;
}
va_end(arg);
return (*format);
}
