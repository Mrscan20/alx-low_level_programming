#include "lists.h"

/**
 * free_listint2 - Free a list.
 * @head: pointer to the address
 *
 * Return: NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
