#include "lists.h"
/**
 * sum_dlistint - sum all the data(n) of all nodes in a list
 * @head: pointer to the head node of the list
 * Return: sum of all data(n)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
