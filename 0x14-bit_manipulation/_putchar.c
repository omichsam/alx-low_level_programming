#include <unistd.h>

int _putchar(char t)
{
	return (write(1, &t, 1));
}
