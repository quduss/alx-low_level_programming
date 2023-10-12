#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete node at an index
 * @head: pointer to pointer to head node
 * @index: index of node to be deleted
 * Return: 1 if success or -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	while (current_node)
	{
		if (i == index)
			break;
		i++;
		current_node = current_node->next;
	}
	if (current_node != NULL)
	{
		if (current_node->prev == NULL)
		{
			current_node->next->prev = NULL;
			*head = current_node->next;
		}
		else
		{
			current_node->prev->next = current_node->next;
			if (current_node->next != NULL)
				current_node->next->prev = current_node->prev;
		}
		free(current_node);
		return (1);
	}
	return (-1);
}
