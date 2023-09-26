#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node
 * at a specific position
 * @head: pointer to head of a list
 * @idx: index of linked list
 * @n: integer value
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int b;
	listint_t *newnode;
	listint_t *hn;

	hn = *head;

	if (idx != 0)
	{
		for (b = 0; b < idx - 1 && hn != NULL; b++)
		{
			hn = h->next;
		}
	}

	if (hn == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = hn->next;
		hn->next = newnode;
	}

	return (newnode);
}
