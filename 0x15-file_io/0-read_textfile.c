#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Returns  " 0 " If the function fails or filename is NULL
 * or
 *    O/w - the actual number of bytes the function can read and print.
 */
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
}