#include "lists.h"
/**
 * sum_dlistint - fonction that return a sum
 * @head: List
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
