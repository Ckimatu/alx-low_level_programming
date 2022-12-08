#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: double pointer to the list
 * @n: data new node contains
 * Return: address of the new element
 * NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (0);
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (0);
	newnode->n = n;
	if (*head)
	{
		(*head)->prev = newnode;
		newnode->next = *head;
	}
	*head = newnode;
	return (newnode);
}
