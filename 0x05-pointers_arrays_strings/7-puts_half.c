#include "main.h"
/**
 * puts_half - function that prints every other character of a string
 * @str: pointer of type char
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int lent = strlen(str);

 for (i = lent / 2 ; str [i] != '\0' , i++)

_putchar(str[i]);

}
_putchar('\n');
}

