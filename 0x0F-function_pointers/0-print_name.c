#include "function_pointers.h"
/**
 * print_name - writes the character c to stdout
 * @name: pointer to anme
 * @f:function pointer
 * Return: void.
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)  
{
f(name);
}
}
