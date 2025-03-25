#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void _print_strings(va_list arg);
void _print_pourcentage(va_list arg);
int _putchar(char c);
void print_char(va_list arg);

/**
 * struct specifiers - Structure qui gère des spécificateurs (qui gère
 * l'impression des types de données)
 * @entry : variable de structure, de type char (pour gérer les caractères)
 * donc qui gère les spécificateur telle que 'd' ou 's' ou encore 'c'.
 * @print_func : est un pointeur de fonction qui prendre en argument
 * va_list arg, il sera utilisé pour manipuler notre liste d'arguments en
 * fonction du type rencontré. (si nombre entier alors on appele fait
 * appel à notre fonction qui est lié)
 *
 */
typedef struct specifiers
{
char entry;
void (*print_func)(va_list arg);
} specifiers;
#endif /* MAIN_H */
