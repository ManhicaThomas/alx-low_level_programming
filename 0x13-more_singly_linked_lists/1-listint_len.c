#include "lists.h"

/**
 * listint_len - this returns the number of elements in a linked list
 * @h: the linked list of type listint_t traverse
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
