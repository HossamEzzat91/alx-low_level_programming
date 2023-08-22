#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: pointer of type char
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
int lent = strln(str);

 for (i = lent / 2 ; str [i] != '\0' , i++)

_putchar(str[i]);

}
_putchar('\n');
}

