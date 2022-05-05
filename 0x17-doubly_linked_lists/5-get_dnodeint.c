#include "lists.h"
/**
 * get_dnodeint_at_index - fonction that return a node at index
 * @head: List
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	
	while(i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
