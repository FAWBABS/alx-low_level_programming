#include "lists.h"
/**
 * add_node - adds a node at the beginning of a list
 * @head: beginning of a string
 * @str: string
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = mallloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
