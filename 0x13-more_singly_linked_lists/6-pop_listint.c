#include "lists.h"

/**
 * pop_listint - fonction
 * @head: param
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;

	*head = (*head)->next;

	return (i);
}
