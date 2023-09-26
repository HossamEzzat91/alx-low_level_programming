#include "main.h"
/**
 *print_listint - prints all list items
 *@h: pointer to the head of the list
 *Return: the number of the list nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
