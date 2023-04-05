#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: pointer to first element in linked list
 * Return: deleted element or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tempValue;
	int digit;

	if (!head || !*head)
	{
		return (0);
	}

	digit = (*head)->n;
	tempValue = (*head)->next;
	free(*head);

	*head = tempValue;

	return (digit);
}

