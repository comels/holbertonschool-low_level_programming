#include "lists.h"
/**
 * add_dnodeint - fonction that add a node
 * @h: List to add
 * Return: List
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return NULL;
	
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	*head = new;
	return (new);
}
