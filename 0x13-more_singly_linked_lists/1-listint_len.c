#include "lists.h"
/**
 * listint_len - return the number of elements
 * in a linked list
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
