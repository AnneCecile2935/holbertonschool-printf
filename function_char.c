#include "main.h"
#include <stdarg.h>
/**
*print_char - print a char
*@arg: arguments in parameter
*Return: Nothing
*/
void print_char(va_list arg)
{
_putchar(va_arg(arg, int));
}
