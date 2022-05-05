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
 * delete_dnodeint_at_index - fonction that delete a node at index
 * @head: List
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (len < index || *head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	if (index == len)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
