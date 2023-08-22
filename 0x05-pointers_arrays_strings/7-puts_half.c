#include "main.h"
/**
 * puts_half - function that prints every other character of a string
 * @str: pointer of type char
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int j; 
int lent = strlen(str);
j = lent / 2;
if (lent % 2 != 0)
{   
j++;
}  
for (i = lent / 2 ; str [i] != '\0'; i++)
{
_putchar(str[i]);

}
_putchar('\n');
}

