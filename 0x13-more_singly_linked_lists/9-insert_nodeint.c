#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node, at a given index
 * @head: pointer to first node
 * @idx: index to insert
 * @n: data to insert
 * Return: pointer new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newList;
listint_t *tempValue = *head;
unsigned int i;

newList = malloc(sizeof(listint_t));

if (newList == NULL || head == NULL)
{
return (NULL);
}

newList->n = n;
newList->next = NULL;

if (idx == 0)
{
newList->next = *head;
*head = newList;
return (newList);
}

for (i = 0; tempValue && i < idx; i++)
{
if (i == idx - 1)
{
newList->next = tempValue->next;
tempValue->next = newList;
return (newList);
}
else
{
tempValue = tempValue->next;
}
}

return (NULL);
}

