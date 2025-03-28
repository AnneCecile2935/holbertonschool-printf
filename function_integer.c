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
char buffer[21];
int count = 0;
int neg = 0; /*pour suivre si nombre positif*/
int i = 0;


if (num == 0)
{
_putchar ('0');
return (1);
}
if (num < 0)
{
neg = 1;/*nombre négatif*/
num = -num; /*on change le signe de num, il devient positif ((-num = (-(-num)) => +num )*/
}
while (num > 0)
{
buffer[i++] = num % 10 + '0'; /*extraire le chiffre à droite et le stocker dans le buffer et continuer*/
num = num / 10;/* reprise du nombre num -n (chiffre de droite)*/
}
if (neg)
{
buffer[i++] = '-'; /*si nombre négatif, ajout du '-' à la fin de l'incrémentation dans le buffer*/
}
while (i--)/*remise dans l'odre de chaque chiffre du nombre*/
{
_putchar(buffer[i]); /*affichage du nombre*/
count++;
}
return (count);
}
