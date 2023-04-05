#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to list that is freed
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tempValue;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		tempValue = (*head)->next;
		free(*head);
		*head = tempValue;
	}

	*head = NULL;
}

