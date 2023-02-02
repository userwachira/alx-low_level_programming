#include "lists.h"
/**
 * add_nodeint_end - add node at the end of
 * a list
 * @head: head
 * @n: new node
 * Return: address of new node or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));

	last = *head;

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (*head);
}
