#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked lists
 * @head: head of the lists
 * Return: sum of data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
