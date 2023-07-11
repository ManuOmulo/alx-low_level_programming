#include "main.h"

/**
 * append_text_to_file - appends text at end of file.
 * @filename: pointer to file.
 * @text_content: string to append at end of file.
 * Return: (-1) if no file or function fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int opn, length, wrt = 0;

if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

opn = open(filename, O_WRONLY | O_APPEND);
wrt = write(opn, text_content, length);

if (opn == -1 || wrt == -1)
return (-1);

close(opn);

return (1);
}

