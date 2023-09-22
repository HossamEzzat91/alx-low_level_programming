#include "lists.h"
/**
 *list_len - lenght of livked list
 *@h: pointer to the head of the list
 *Return: the number of the list nodes
 *
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
