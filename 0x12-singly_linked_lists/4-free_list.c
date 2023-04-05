#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free linked list
 * @head: list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tempValue;

	while (head)
	{
		tempValue = head->next;
		free(head->str);
		free(head);
		head = tempValue;
	}
}

