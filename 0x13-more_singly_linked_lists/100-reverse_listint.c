#include "lists.h"

/**
 * reverse_listint - reverses singly linked list
 * @head: pointer to head of list
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m;
	listint_t *i;

	m = NULL;
	i = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = i;
	}

	*head = m;
	return (*head);
}
