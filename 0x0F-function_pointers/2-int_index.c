#include "function_pointers.h"
/**
 * int_index - writes the character c to stdout
 * @array: pointer to anme
 * @cmp:function pointer
 * @size:array size
 * Return: void.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index = -1, i;
if (array != 0 && cmp != 0 && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
index = i;
break;
}
}
}
return (index);
}
