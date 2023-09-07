#include "main.h"
/**
 * _strncat- function that concatenates two strings.
 * @dest: pointer of dest string
 * @src : pointer to src string
 * @n :no of string to stop
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
