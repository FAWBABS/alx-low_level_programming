#include "lists.h"

/**
 * get_dnodeint_at_index - prints the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node from 0
 *
 * Return: 0 if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
