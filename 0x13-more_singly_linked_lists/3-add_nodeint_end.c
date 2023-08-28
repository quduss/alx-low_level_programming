#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds newnode at the end of a linked list
 * @head: pointer to pointer to head node
 * @n: integer value of newnode
 * Return: address of new node or NULL if it fails to create
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *lastnode;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
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
