#include "lists.h"


/**
 * check_cycle - checks for a cycle in a single linked list
 * @list: beginning of the node pointer
 * Return: 0 (Failure), 1 (Success)
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	check = current->next;
	while (current != NULL && check->next != NULL
			&& check->next->next != NULL)
	{
		if (current == check)
			return (1);

		current = current->next;
		check = check->next->next;
	}
	return (0);
}
