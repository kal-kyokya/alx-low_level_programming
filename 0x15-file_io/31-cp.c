#include "main.h"

/**
 * copy - Sends text content from one file to another.
 * @file_from: File from which content is copied.
 * @file_to: File into which content is being copied.
 *
 * Return: A specific exit status.
 */
int copy(const char *file_from, char *file_to)
{
        int fd_from, fd_to;
        char buffer[1024];
        ssize_t bytes_read, bytes_written;

        if (file_from == NULL || file_to == NULL)
                return (-1);
        fd_from = open(file_from, O_RDONLY);
        if (fd_from == -1)
        {
                dprintf(2, "Error: Can't read from file %s\n", file_from);
                exit(98);
        }
        fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
        if (fd_to == -1)
        {
                dprintf(2, "Error: Can't write to %s\n", file_to);
                close(fd_from);
                exit(99);
        }
        bytes_read = read(fd_from, buffer, 1024);
        if (bytes_read <= 0)
        {
                dprintf(2, "Error: Can't read from file %s\n", file_from);
                close(fd_from);
                close(fd_to);
                exit(98);
        }
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written <= 0)
        {
                dprintf(2, "Error: Can't write to %s\n", file_to);
                close(fd_from);
                close(fd_to);
                exit(99);
        }

        if (close(fd_from) == -1)
        {
                dprintf(2, "Error: Can't close fd %s\n", file_from);
                exit(100);
        }
        if (close(fd_to) == -1)
        {
                dprintf(2, "Error: Can't close fd %s\n", file_to);
                exit(100);
        }

        return (1);
}
