#include "main.h"
/**
 * _memcpy- function that fills memory with a constant byte.
 * @src: pointer of memroy adress
 * @dest : constant adress
 * @n :thr first n bytes of memoty
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
