#include <stdarg.h>
#include "main.h"

/**
 * print_int - fonction qui retourne des valeurs quand elles sont négatives
 * et retourne la longueur de
 * @arg: Contient la liste des arguments variadique
 * Return: on retourne count
 */

int print_int(va_list arg)
{
long int num = va_arg(arg, int);
char buffer[12];
int count = 0;
int neg = 0;
int i = 0;

if (num == 0)
{
_putchar ('0');
return (1);
}
if (num < 0)
{
neg = 1;
num = -num;
}
while (num > 0)
{
buffer[i++] = num % 10 + '0';
num = num / 10;
}
if (neg)
{
buffer[i++] = '-';
}
while (i--)
{
_putchar(buffer[i]);
count++;
}
return (count);
}
