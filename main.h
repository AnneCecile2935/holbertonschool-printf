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
 * struct specifiers -
 *
 */
typedef struct specifiers
{
    char entry;
    void (*print_func)(va_list arg);
} specifiers;
#endif /* MAIN_H */
