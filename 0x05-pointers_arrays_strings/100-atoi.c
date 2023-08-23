#include "main.h"
/**
 * _atoi- function that prints every other character of a string
 * @s: pointer of type char
 * Return: char
 */
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
{
i++;
}
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
num = (num * 10) + (s[i] - '0');
}
else if (num > 0)
{
break;
}
++i;
}
return ((num *sign));
}
