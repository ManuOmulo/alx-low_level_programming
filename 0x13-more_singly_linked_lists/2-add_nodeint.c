#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to first node in a list
 * @n: data to be inserted
 * Return: pointer to new node, or NULL if unsuccessful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

