#include "lists.h"

/**
 * sum_listint - calculates sum of all data in a list
 * @head: first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempValue = head;

	while (tempValue)
	{
		sum = sum + tempValue->n;
		tempValue = tempValue->next;
	}

	return (sum);
}

