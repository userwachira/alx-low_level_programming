#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f, *l;

	f = NULL;
	l = NULL;

	while (*head != NULL)
	{
		l = (*head)->next;
		(*head)->next = f;
		f = *head;
		*head = l;
	}

	*head = f;
	return (*head);
}
