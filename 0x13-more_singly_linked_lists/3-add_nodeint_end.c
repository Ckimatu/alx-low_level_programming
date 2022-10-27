#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node
 * at the end of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to be entered in the new node
 * Return: address of the new element
 * NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
