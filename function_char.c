#include "main.h"
#include <stdarg.h>
/**
*print_char - print a char
*@arg: arguments in parameter
*Return: (1)
*/
int print_char(va_list arg)
{
	char c = va_arg(arg, int);/*déclaration de variable c avec les arguments*/

	_putchar(c);
	return (1);
}
