#include "lists.h"

/**
 * pop_listint - deletes head node of
 * singly linked list
 * @head: pointer to head of list
 *
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *hn;
	listint_t *haye;

	if (*head == NULL)
		return (0);

	haye = *head;

	headnode = haye->n;

	hn = haye->next;

	free(haye);

	*head = hn;

	return (headnode);
}
