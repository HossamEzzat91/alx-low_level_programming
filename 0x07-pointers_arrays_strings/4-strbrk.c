#include "main.h"
/**
 * _strpbrk- function that locates a character in a string.
 * @s: given string
 * @accept : char to search for
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i] != '\0')
{
j = 0;
while (s[j] != 0)
{
if (s[i] == s[j])
{
return (s + i);
}
++j;
}
i++;
}
return (NULL);
}
