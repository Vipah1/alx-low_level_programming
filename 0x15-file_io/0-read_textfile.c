#include "main.h"
/**
* read_tetfile - This funnction reads a text file and prints it to STDOUT.
* @filename: this the name or file to be read.
* @letters: this is the number of letter to be read
* Return: Return w if success and 0 when the function fails to to execute
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, 0_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
