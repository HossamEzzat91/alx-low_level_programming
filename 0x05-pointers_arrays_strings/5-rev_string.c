#include "main.h"
/**
 * rev_string - print reverse string follow by newline
 * @s: pointer of type char
 * Return: void
 */
void rev_string(char *s)
{
int len, i, j;
char c;
len = strlen(s);
for (i = 0, j = len - 1; i < j; i++, j--)
{
c = s[i];
s[i] = s[j];
s[j] = c;
}
}
