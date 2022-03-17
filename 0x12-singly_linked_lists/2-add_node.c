#include "lists.h"
/**
 * add_node - fonction
 * @head: param
 * @str: param
 * Return: i
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	for (i = 0; str[i]; i++)
		;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (0);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
