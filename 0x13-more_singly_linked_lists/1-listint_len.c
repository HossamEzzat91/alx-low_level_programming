#include "lists.h"
/**
 *print_listint_len - prints all list items
 *@h: pointer to the head of the list
 *Return: the number of the list nodes
 *
 */
size_t print_listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
