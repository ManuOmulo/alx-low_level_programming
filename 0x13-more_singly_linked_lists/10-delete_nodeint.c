#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a given index
 * @head: pointer to the first node
 * @index: index to delete
 * Return: (1) for Success or (-1) for Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempValue = *head;
listint_t *c = NULL;
unsigned int i = 0;

if (*head == NULL)
{
return (-1);
}

if (index == 0)
{
*head = (*head)->next;
free(tempValue);
return (1);
}

while (i < index - 1)
{
if (tempValue == NULL || !(tempValue->next))
{
return (-1);
}

tempValue = tempValue->next;
i++;
}

c = tempValue->next;
tempValue->next = c->next;
free(c);

return (1);
}
