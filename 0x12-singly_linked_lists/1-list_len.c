#include "lists.h"

/**
 * list_len - returns no of elements
 * @h: pointer to head of list
 *
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
