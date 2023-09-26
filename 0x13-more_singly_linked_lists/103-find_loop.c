#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: pointer to head of list
 *
 * Return: address of node where loop begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1;
	listint_t *previous;

	p1 = head;
	previous = head;
	while (head && p1 && p1->next)
	{
		head = head->next;
		p1 = p1->next->next;

		if (head == p1)
		{
			head = previous;
			previous =  p1;
			while (1)
			{
				p1 = previous;
				while (p1->next != head && p1->next != previous)
				{
					p1 = p1->next;
				}
				if (p1->next == head)
					break;

				head = head->next;
			}
			return (p1->next);
		}
	}

	return (NULL);
}
