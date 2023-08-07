#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: read text file being
 * @letters: read the number of letters
 * Return: q- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fj;
ssize_t q;
ssize_t y;
fj = open(filename, O_RDONLY);
if (fj == -1)
return (0);
buf = malloc(sizeof(char) * letters);
y = read(fj, buf, letters);
q = write(STDOUT_FILENO, buf, y);
free(buf);
close(fj);
return (q);
}
