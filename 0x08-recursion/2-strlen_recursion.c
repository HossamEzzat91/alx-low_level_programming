#include "main.h"
/**
 * _strlen_recursion- print astring lenght
 * @s: string arrays
 * Return: string lenght 
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s != '\0')
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
