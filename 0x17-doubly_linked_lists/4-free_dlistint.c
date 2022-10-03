#include "lists.h"

/**
 * free-dlistint_t - function that frees a dlistint_t
 * @head: pointer to the head of the list
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
