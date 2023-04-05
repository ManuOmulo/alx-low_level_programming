#include "lists.h"

/**
 * find_listint_loop - finds loop in a list
 * @head: linked list
 * Return: address where the loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head;
	listint_t *two = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (one && two && two->next)
	{
		two = two->next->next;
		one = one->next;

		if (two == one)
		{
			one = head;

			while (one != two)
			{
				one = one->next;
				two = two->next;
			}

			return (two);
		}
	}

	return (NULL);
}

