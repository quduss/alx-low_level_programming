#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to pointer to the head node
 * Return: the integer data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int temp_int;

	if (*head == NULL)
		return (0);
	temp_node = (*head)->next;
	temp_int = (*head)->n;
	free(*head);
	*head = temp_node;
	return (temp_int);
}
