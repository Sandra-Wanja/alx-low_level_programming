#include "lists.h"

/**
 * print_listint - function that prints all
 * the elemnts of singly linked list
 * @h: pointer to head of list
 *
 * Return: total no of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t newnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		newnodes++;
	}
	return (newnodes);
}
