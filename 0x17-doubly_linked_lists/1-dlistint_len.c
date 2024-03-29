#include "lists.h"

/**
 * dlistint_len - Print the number of elements in a linked lists
 * @h: Head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
