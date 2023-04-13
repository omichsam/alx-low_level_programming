#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (!filename)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    char *buffer = malloc(sizeof(char) * (letters + 1));
    if (!buffer)
        return 0;

    ssize_t num_read = read(fd, buffer, letters);
    if (num_read == -1)
        return 0;

    ssize_t num_written = write(STDOUT_FILENO, buffer, num_read);
    if (num_written == -1 || num_written != num_read)
        return 0;

    free(buffer);
    close(fd);

    return num_read;
}

/*

#include "main.h"
#include <stdlib.h>

/ **
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 * /
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t o, r, w;
    char *buffer;

    // Check if filename is NULL
    if (filename == NULL)
        return (0);

    // Allocate memory for the buffer
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    // Open the file in read-only mode
    o = open(filename, O_RDONLY);
    if (o == -1)
    {
        free(buffer);
        return (0);
    }

    // Read data from the file into the buffer
    r = read(o, buffer, letters);
    if (r == -1)
    {
        free(buffer);
        close(o);
        return (0);
    }

    // Write the data from the buffer to standard output
    w = write(STDOUT_FILENO, buffer, r);
    if (w == -1 || w != r)
    {
        free(buffer);
        close(o);
        return (0);
    }

    // Free the memory used by the buffer, close the file, and return the number of bytes read
    free(buffer);
    close(o);

    return (w);
}*/