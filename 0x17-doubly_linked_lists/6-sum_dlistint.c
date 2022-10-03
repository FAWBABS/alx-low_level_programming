#include "lists.h"

/**
 * sum_dlistint - prints the sum of all the data n
 * @head: poonter to the head of the list
 *
 * Return: empty when list is 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
