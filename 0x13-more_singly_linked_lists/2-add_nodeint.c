#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning
 * @head: A pointer to the address
 * @n: The integer for the new node.
 *
 * Return: NULL or Address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
