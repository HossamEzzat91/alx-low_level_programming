#include "main.h"
/**
 * argstostr - a function  that returns a pointer to 2d array of int,
 * @ac: no of arguments
 * @av: array of arguments
 * Return: pointer to the array.
 *
 */
char *argstostr(int ac, char **av)
{
char *r;
int i, j;
int total_len = 0;
int loc = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
total_len += strlen(av[i]) + 1;
}
r = malloc(total_len *sizeof(char) + 1);
if (r == 0)
{
return (0);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, loc++)
{
r[loc] = av[i][j];
}
r[loc] = '\n';
loc++;
}
return (r);
}
