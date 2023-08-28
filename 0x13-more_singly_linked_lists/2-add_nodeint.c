#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a list
 * @head: pointer to pointer to head node
 * @n: integer data of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
