#include "lists.h"

/**
 * pop_listint - Delete the head node of a list.
 * @head: pointer to the address
 *
 * Return: 0 or head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (ret);
}
