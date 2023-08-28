#include "main.h"
/**
 * _memset- function that fills memory with a constant byte.
 * @s: pointer of memroy adress
 * @b : constant adress
 * @n :thr first n bytes of memoty
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
