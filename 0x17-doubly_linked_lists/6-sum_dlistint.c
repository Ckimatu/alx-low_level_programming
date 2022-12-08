#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) in list
 *
 * @head: pointer to thehead of the list
 * Return: sum of all the data (n) of the list
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
