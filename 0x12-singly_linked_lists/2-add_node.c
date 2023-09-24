#include "lists.h"
/**
 * add_node - adds new node at start
 * of a linked list
 * @head: double pointer to start of list
 * @str: pointer to string to be stored
 * in linked list
 *
 * Return: pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t strchar;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (strchar = 0; str[strchar]; strchar++)
		;

	newnode->len = strchar;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
