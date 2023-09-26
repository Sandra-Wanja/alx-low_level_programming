#include "lists.h"

/**
 * add_nodeint_end - adds new node at end
 * of singly linked list
 * @head: pointer to head of list
 * @n: int element
 *
 * Return: new node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempry;

	(void)tempry;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	tempry = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tempry->next != NULL)
		{
			tempry = tempry->next;
		}
		tempry->next = newnode;
	}

	return (*head);
}
