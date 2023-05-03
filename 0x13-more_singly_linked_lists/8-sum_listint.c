#include "lists.h"

/**
 * sum_listint - Calculate the sum
 * @head: pointer to the head of the list.
 *
 * Return: 0 or the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
