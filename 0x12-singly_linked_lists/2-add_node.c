#include "lists.h"
/**
 *add_node - prints all list items
 *@head: pointer to the head of the list
 *@str:string to be duplicated
 *Return: the number of the list nodes
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
