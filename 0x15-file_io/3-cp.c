#include "main.h"
/**
* main - Copy the content of one file to another.
* @argc: The argument count.
* @argv: The argument vector.
*
* Return: 0 on success, or an appropriate exit code on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_bytes, write_bytes;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

/* Open the source file for reading */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Open or create the destination file for writing */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99);
}

/* Copy data from source to destination */
while ((read_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes == -1 || write_bytes != read_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

/* Close the file descriptors */
if (close(fd_from) == -1 || close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd\n");
exit(100);
}

return 0;
