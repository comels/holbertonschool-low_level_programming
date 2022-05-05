#include "lists.h"
/**
 * print_dlistint - fonction that print Dlist
 * @h: List to print
 * Return: Number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
