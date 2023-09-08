#include "main.h"
/**
 * malloc_checked- a function  that returns a pointer t,
 * @b:int
 * Return: pointer to the array.
 *
 */
void *malloc_checked(unsigned int b)
{
int *r;
r = malloc(b);
if (r == 0)
{
exit(98);
}
return (r);
}
