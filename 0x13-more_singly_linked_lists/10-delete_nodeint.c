#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * of list
 * @head: pointer to head of a list
 * @index: index at which node is removed from
 * list
 *
 * Return: int value
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *previous;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (n = 0; n < index - 1 && previous != NULL; n++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}

	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
