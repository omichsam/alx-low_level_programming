#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 *  On success : Return 1.
 * On error, -1 is returned, 
 * and errno is set appropriatey.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}