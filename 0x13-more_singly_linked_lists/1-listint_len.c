#include "lists.h"

/**
 * listint_len - returns no of nodes in
 * a singly linked list
 * @h: pointer to head of list
 *
 * Return: total no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t newnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		newnodes++;
	}
	return (newnodes);
}
