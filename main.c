#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len2;
    int len;
    int thought;
    _printf(NULL);
    _printf("%K\n");
    printf("%K\n");
    _printf("%%\n");
    printf("%%\n");
    _printf("%!\n");
    printf("%!\n");
    _printf("%");
    printf("%");
    _printf("css%ccs%scscscs", 'T', "Test");
    printf("css%ccs%scscscs", 'T', "Test");
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%s", "This sentence is retrieved from va_args!\n");
    printf("%s", "This sentence is retrieved from va_args!\n");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
    thought = _printf("Hello Samourai\n");
    _printf("Length:%d\n", thought);
    return (0);
}
