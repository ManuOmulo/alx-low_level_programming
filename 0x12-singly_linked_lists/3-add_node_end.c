#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of list
 * @head: double pointer
 * @str: string to add
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode;
list_t *tempValue = *head;
unsigned int length = 0;

while (str[length])
{
length++;
}

newNode = malloc(sizeof(list_t));

if (newNode == NULL)
{
return (NULL);
}

newNode->str = strdup(str);
newNode->len = length;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (tempValue->next)
{
tempValue = tempValue->next;
}

tempValue->next = newNode;

return (newNode);
}

