#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the list
 * Return: sum
 * if list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
