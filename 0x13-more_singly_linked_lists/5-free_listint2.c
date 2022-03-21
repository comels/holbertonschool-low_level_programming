#include "lists.h"

/**
 * free_listint2 - fonction
 * @head: param
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freenew;

	while (*head)
	{
		freenew = (*head)->next;
		free(*head);
		*head = freenew;
	}
	head = NULL;
}
