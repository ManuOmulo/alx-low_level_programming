#include "lists.h"

/**
 * print_listint - prints elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: node count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

