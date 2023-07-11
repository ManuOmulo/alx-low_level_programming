#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads text file, prints to the POSIX standard output.
 * @filename: text file
 * @letters: letters to be read
 * Return: count- number of bytes read and printed
 * (0) jf fails or filename = NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t count;
ssize_t filed;
ssize_t text;

filed = open(filename, O_RDONLY);
if (filed == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
text = read(filed, buffer, letters);
count = write(STDOUT_FILENO, buffer, text);

free(buffer);
close(filed);
return (count);
}
