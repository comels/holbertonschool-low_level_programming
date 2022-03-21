#include "lists.h"

/**
 * add_nodeint_end - fonction
 * @head: param
 * @n: param
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
	}
	last->next = new;
	return (new);
}
