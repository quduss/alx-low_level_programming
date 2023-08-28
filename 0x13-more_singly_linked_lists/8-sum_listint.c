#include "lists.h"
/**
 * sum_listint - sums all the data(n) of listint_t list
 * @head: pointer to the head node of the list
 * Return: sum of all the data(n) of all nodes in the list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
