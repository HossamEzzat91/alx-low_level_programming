#include "main.h"
/**
 * str_concat - a function  that returns a pointer to a newly allocated space,
 * @s1: string to be duplicated
 * @s2:string two
 * Return: pointer to the array.
 *
 */
char *str_concat(char *s1, char *s2)
{
char *r;
int i, j, size1 = 0, size2 = 0;
if (s1 == 0 && s2 == 0)
{
return (0);
}
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
r = malloc((size1 *sizeof(*s1)) + (size2 *sizeof(*s2)) + 1);
if (r == 0)
{
return (0);
}
for (i = 0; i < size1; i++)
{
r[i] = s1[i];
}
for (j = 0; j < size2; j++)
{
r[size1 + j] = s2[j];
}
r[size1 + size2] = '\0';
return (r);
}
