#include "main.h"
#include <stdarg.h>

void print_int(va_list arg)
{
    int num = va_arg(arg, int);
    if (num < 0)
    {
        _putchar ('-');
        num = -num;
    }
    if (num == 0)
    _putchar('0');
}

