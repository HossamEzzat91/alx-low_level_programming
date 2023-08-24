#include "main.h"
/**
 * string_toupper - print reverse string follow by newline
 * @s: pointer of type char
 * Return: upper version of char
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
