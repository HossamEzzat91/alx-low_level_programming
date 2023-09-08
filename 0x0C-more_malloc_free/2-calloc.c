#include "main.h"

/**
 * _calloc - a function that locate memory for an array,
 * @nmemb:number of array elemnts
 * @size: size of each elemnt
 * Return: pointer to the array.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *r;
unsigned int i;
if (size == 0 || nmemb == 0)
{
return (0);
}
r = malloc(sizeof(int) * nmemb);
if (r == 0)
{
return (0);
}

for (i = 0; i < nmemb; i++)
{
((char *)r)[i * sizeof(int)] = 0;
}
return (r);
}
