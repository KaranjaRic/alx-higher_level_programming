#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a new node at given
 * position
 * @number: index of the list where the new node is added
 * @head: head of a list
 * Return: The address of the new node, or NULL (Failure)
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *h;
	listint_t *h_prev;
	listint_t *new;

	h = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	while (h != NULL)
	{
		if (h->n > number)
			break;
		h_prev = h;
		h = h->next;
	}
	new->n = number;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = h;
		if (h == *head)
			*head = new;
		else
			h_prev->next = new;
	}
	return (new);
}
