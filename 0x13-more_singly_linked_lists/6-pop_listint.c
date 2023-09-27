#include "lists.h"
/**
 *pop_listint - delete head node
 *@head: pointer to the head of the list
 *Return: head node value
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	current = *head;
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}
