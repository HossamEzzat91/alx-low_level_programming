#include "main.h"
/**
 * _strdup - a function  that returns a pointer to a newly allocated space,
 * @str: string to be duplicated
 *
 * Return: pointer to the array.
 *
 */
char *_strdup(char *str)
{
char *r;
int i, size = 0;
if (str == 0)
{
return (0);
}
while (str[size] != '\0')
{
size++;
}
r = malloc((size *sizeof(*str)) + 1);
if (r == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
r[i] = str[i];
}
r[size] = '\0';
return (r);
}
