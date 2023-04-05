#include "lists.h"

/**
 * listint_len - returns the no of elements in a linked lists
 * @h: linked list to traverse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}

