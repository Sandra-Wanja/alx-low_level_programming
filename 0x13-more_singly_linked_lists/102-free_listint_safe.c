#include "lists.h"

/**
 * free_listp2 - free singly linked list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - free singly linked list
 * @h: pointer to head of list
 *
 * Return: size the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t newnodes = 0;
	listp_t *hdptr, *new, *sum;
	listint_t *wurr;

	hdptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hdptr;
		hdptr = new;

		sum = hdptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hdptr);
				return (newnodes);
			}
		}

		wurr = *h;
		*h = (*h)->next;
		free(wurr);
		newnodes++;
	}

	*h = NULL;
	free_listp2(&hdptr);
	return (newnodes);
}
