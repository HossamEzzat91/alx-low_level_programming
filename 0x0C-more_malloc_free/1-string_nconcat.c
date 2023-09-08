#include "main.h"
/**
 * string_nconcat -a function that returns apointer to anewly allocated space,
 * @s1: string to be duplicated
 * @s2:string two
 * @n:no of char of s2
 * Return: pointer to the array.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *r;
unsigned int i, j, size1 = 0, size2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
if (n >= size2)
{
n = size2;
}
r = malloc((size1 *sizeof(*s1)) + (n *sizeof(*s2)) + 1);
if (r == 0)
{
return (0);
}
for (i = 0; i < size1; i++)
{
r[i] = s1[i];
}
for (j = 0; j < n; j++)
{
r[i] = s2[j];
i++;
}
r[i] = '\0';
return (r);
}
