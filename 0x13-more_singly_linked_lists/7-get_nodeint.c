#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in list
 * @index: index of node to return
 * Return: pointer to node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempValue = head;

	while (tempValue && i < index)
	{
		tempValue = tempValue->next;
		i++;
	}

	if (tempValue == NULL)
	{
		return (NULL);
	}

	return (tempValue);
}

