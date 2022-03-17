#include "lists.h"
/**
 * add_node_end - fonction
 * @head: param
 * @str: param
 * Return: i
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *last;

	for (i = 0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
