#include "lists.h"
/**
 *free_list - free alist_t list
 *@head: pointer to the head of the list
 *Return: void
 *
 */
void free_list(const list_t *head)
{
	list_t *current;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
