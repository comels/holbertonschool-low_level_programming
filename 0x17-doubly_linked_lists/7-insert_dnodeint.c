#include "lists.h"
/**
 * dlistint_len - fonction that count the size of the Dlist
 * @h: List to count
 * Return: Number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
/**
 * insert_dnodeint_at_index - fonction that return a node at index
 * @h: List
 * @idx: index
 * @n: n
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *h;
	unsigned int i = 0;
	size_t len = dlistint_len(*h);

	if (len < idx)
		return (NULL);

	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (len == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
