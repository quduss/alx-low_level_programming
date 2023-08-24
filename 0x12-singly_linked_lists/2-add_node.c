#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list.
 * @head: pointer to pointer to head node
 * @str: pointer to string to be inserted to the newnode
 * Return: address of new node or NULL if not created
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
