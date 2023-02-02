#include "lists.h"

/**
 * ptint_listint - prints the elements of listint_t list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while(h != NULL)
	{
		if(h->next == NULL)
		{
			printf("%d", h->n);
		}
		else
		{
			printf("%d, ", h->n);
		}
		h = h->n;
	}
	return (nodes);
}
