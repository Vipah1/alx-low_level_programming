#include "main.h"
/**
 * read_textfile - functions that reads a textfile and prints letters
 * @filename: first argument of the function
 * @letters: second argument of the function
 * Reurn: returns number of letters printed and 0 when fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;
char *buf;
if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buf = malloc(sizeof(char) * (letters));
if (!buf)
{
return (0);
}
nrd = read(fd, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);
close(fd);
free(buf);
return (nwr);
}
