#include "lists.h"

/**
 * add_node_end - add new node towards
 * the end of a linked list
 * @head: double pointer to start of
 * linked list
 * @str: pointer to string to store
 * in the list
 * Return: new element address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tempry;
	size_t strchar;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (strchar = 0; str[strchar]; strchar++)
		;

	newnode->len = strchar;
	newnode->next = NULL;
	tempry = *head;

	if (tempry == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tempry->next != NULL)
			tempry = tempry->next;
		tempry->next = newnode;
	}

	return (*head);
}
