#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new
 * node at a given position.
 * @head: double pointer to the list
 * @idx: index of the list where the new node
 * should be added. Starts at 0
 * @n: data to be added to the new node
 * Return:  address of the new node
 * NULL if it failed
 * If it is not possible to add the new node
 * at index idx, do not add the new node
 * and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
