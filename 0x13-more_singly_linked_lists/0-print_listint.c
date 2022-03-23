#include "lists.h"

/**
 * print_listint - fonction
 * @h: param
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *new = h;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		i++;
	}
	return (i);
}
