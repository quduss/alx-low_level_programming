#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node
 * @idx: index to insert new node at
 * @n: integer data of new node
 * Return: address of new node or NULL if it fails to add
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;
	listint_t *current_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (ptr != NULL)
	{
		if (i == (idx - 1))
		{
			current_node = ptr;
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		i++;
		ptr = ptr->next;
	}
	if (current_node == NULL)
		free(new_node);
	return (NULL);
}
