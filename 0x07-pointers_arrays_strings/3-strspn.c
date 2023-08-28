#include "main.h"
/**
 * _strspn- a function that gets the length of a prefix substring.
 * @s: pointer of memroy adress
 * @accept : start to count
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j ;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
break;
}
j++;
}
if (accept[j] == '\0')
{
break;
}
i++;
}
return (i);
}
