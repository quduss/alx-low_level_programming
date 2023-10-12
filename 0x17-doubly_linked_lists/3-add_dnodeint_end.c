#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds new node at the end of a doubly linked list
 * @head: pointer to pointer to the head node of the list
 * @n: integer data of the new node
 * Return: address of the new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	last_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
