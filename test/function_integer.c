#include <stdarg.h>
void print_int(va_list arg)
{
    int num = va_arg(arg, int);
    int neg;
    int i = 0;
    if (num == 0)
    {
        _putchar ('0');
       return (1);
    }
    if (num < 0)
    {
        neg = 1;
        num = - num;
    }
    while (num > 0)
    {
        buffer[i++] = num % 10 + '0';
        num / 10;
    }
    if (neg)
    {
        buffer[i++]= '-';
    }
    while (i--)
    {
        _putchar(&buffer[i]);
        count++;
    }
    return (count);
}

