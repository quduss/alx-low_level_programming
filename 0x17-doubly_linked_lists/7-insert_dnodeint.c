#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at an index
 * @idx: index to insert new node
 * @n: data(n) of new node
 * @h: pointer to pointer to the head node of the list
 * Return: address of newnode or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head_node = *h, *prev_node = NULL, *next_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new_node;
		else
		{
			(*h)->prev = new_node;
			new_node->next = *h;
			*h = new_node;
		}
		return (new_node);
	}
	else
	{
		while (head_node)
		{
			if (i == (idx - 1))
			{
				prev_node = head_node;
				break;
			}
			i++;
			head_node = head_node->next;
		}
		if (prev_node != NULL)
		{
			next_node = prev_node->next;
			new_node->next = next_node;
			new_node->prev = prev_node;
			prev_node->next = new_node;
			if (next_node != NULL)
				next_node->prev = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
