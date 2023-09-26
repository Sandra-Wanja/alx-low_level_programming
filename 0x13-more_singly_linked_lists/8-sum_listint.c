#include "lists.h"

/**
 * sum_listint - returns sum of data
 * (n) of list
 * @head: pointer to head of a list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
