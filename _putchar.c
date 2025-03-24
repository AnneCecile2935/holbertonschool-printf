#include "main.h"
#include <unistd.h>
/**
*_putchar - function prints characters by characters
*@c: parameter
*Return: Always 0.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
