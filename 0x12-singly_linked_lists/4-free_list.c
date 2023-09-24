#include "lists.h"

/**
 * free_list - free singly linked list
 * @head: pointer to first node of linked
 * list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
