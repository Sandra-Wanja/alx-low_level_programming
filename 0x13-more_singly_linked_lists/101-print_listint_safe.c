#include "lists.h"

/**
 * free_listp - free singly linked list
 * @head: pointer to head of a list
 *
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *tempry;
	listp_t *wurr;

	if (head != NULL)
	{
		wurr = *head;
		while ((tempry = wurr) != NULL)
		{
			wurr = wurr->next;
			free(tempry);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to head of a list
 *
 * Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t newnodes = 0;
	listp_t *hdptr, *new, *sum;

	hdptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hdptr;
		hdptr = new;

		sum = hdptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hdptr);
				return (newnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		newnodes++;
	}

	free_listp(&hdptr);
	return (newnodes);
}
