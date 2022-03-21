#include "lists.h"

/**
 * listint_len - fonction
 * @h: param
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
