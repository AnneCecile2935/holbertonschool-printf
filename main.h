#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct specifiers - Structure qui gère des spécificateurs (qui gère
 * l'impression des types de données)
 * @entry: variable de structure, de type char (pour gérer les caractères)
 * donc qui gère les spécificateur telle que 'd' ou 's' ou encore 'c'.
 * @print_func: est un pointeur de fonction qui prendre en argument
 * va_list arg, il sera utilisé pour manipuler notre liste d'arguments en
 * fonction du type rencontré. (si c'est un nombre entier alors on fait appelle
 * à notre fonction qui est lié)
 *
 */
typedef struct specifiers
{
char entry;
int (*print_func)(va_list arg);
} specifiers;
int _printf(const char *format, ...);
int _print_strings(va_list arg);
int _print_pourcentage(va_list arg);
int _putchar(char c);
int print_char(va_list arg);
int print_int(va_list arg);

#endif /* MAIN_H */
