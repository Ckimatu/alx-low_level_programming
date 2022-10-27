#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a listint_t linked list
 * @head: pointer to the head node
 * Return: head node’s data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
