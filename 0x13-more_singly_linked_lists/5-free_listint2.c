#include "lists.h"

/**
 * free_listint2 - free singly linked list
 * @head: pointer head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tempry;
	listint_t *pury;

	if (head != NULL)
	{
		pury = *head;
		while ((tempry = pury) != NULL)
		{
			pury = pury->next;
			free(tempry);
		}
		*head = NULL;
	}
}
