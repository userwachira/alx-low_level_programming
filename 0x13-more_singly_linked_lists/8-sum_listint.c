#include "lists.h"
/**
 * sum_listint - print the sum of all elements
 * @head: head
 * Return: sum of all data or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
