#include "function_pointers.h"
/**
 * array_iterator - writes the character c to stdout
 * @array: pointer to anme
 * @action:function pointer
 * @size:array size
 * Return: void.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *i = array + size - 1;
if (array != 0 && action != 0 && size > 0)
{
while (array <= i)
{
action(*array++);
}
}
}
