#include "lists.h"

/**
 * free_listint - free singly linked list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tempry;

	while ((tempry = head) != NULL)
	{
		head = head->next;
		free(tempry);
	}
}
