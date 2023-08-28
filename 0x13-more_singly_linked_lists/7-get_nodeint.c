#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: pointer to the head node
 * @index: index of the nth node
 * Return: nth node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
