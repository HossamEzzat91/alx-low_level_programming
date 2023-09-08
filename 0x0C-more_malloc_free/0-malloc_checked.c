#include "main.h"
/**
 * malloc_checked- a function  that returns a pointer to a newly allocated space,
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
exit (98);
}
return (r);
}
