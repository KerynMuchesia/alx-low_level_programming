#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         0 if the file can not be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int fd;
        ssize_t num_read, num_written;
        char *buf;

        if (!filename)
                return (0);

        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (0);

        buf = malloc(sizeof(char) * (letters + 1));
        if (!buf)
        {
                close(fd);
                return (0);
        }

        num_read = read(fd, buf, letters);
        close(fd);

        if (num_read == -1)
        {
                free(buf);
                return (0);
        }

        buf[num_read] = '\0';

        num_written = write(STDOUT_FILENO, buf, num_read);
        free(buf);

        if (num_written != num_read)
                return (0);

        return (num_written);
}
