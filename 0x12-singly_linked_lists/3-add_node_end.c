#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds new node at the end of a list
 * @head: pointer to the head node
 * @str: pointer to string to be duplicated and put in the newnode
 * Return: address of new element or NULL if fail to create
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = newnode;
	return (newnode);
}
