#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node
 * @head: head
 * @index: shows index of node
 * Return: nth node of a linked list or NULL
 * if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
