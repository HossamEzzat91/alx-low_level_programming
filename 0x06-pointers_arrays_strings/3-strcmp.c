#include "main.h"
/**
 * _strcmp- function that compare two strings.
 * @s1: pointer of dest string
 * @s2 : pointer to src string
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] != '\0' && s2[j] != '\0')
{
if (s1[i] != s2[j])
{
return (((int)*s1 - '0') - ((int)*s2 - '0'));
}
i++;
j++;
}
return (((int)*s1 - '0') - ((int)*s2 - '0'));
}
