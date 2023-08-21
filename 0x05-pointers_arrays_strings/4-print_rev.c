#include "main.h"
/**
 * print_rev - print reverse string follow by newline
 * @s: pointer of type char
 * Return: void
 */
void print_rev(char *s)
{
int len, i;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
