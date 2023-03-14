#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate to new memory space
* @str: char
* Return: duplicated string
*/

char *_strdup(char *str)
{
char *dup;
int i, r = 0;

i = 0;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

dup = malloc(sizeof(char) * (i + 1));

if (dup == NULL)
return (NULL);

for (r = 0; str[r]; r++)
dup[r] = str[r];

return (dup);
}


