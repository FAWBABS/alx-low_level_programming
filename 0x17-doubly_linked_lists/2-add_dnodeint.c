#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t
 * @head: Head of the list
 * @n: integer for new node to contain
 *
 * Return: Address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new ->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
