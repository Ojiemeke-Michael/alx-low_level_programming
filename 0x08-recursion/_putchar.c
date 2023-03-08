#include <unistd.h>

/**
 * _putchar - this prints one character at a time to the std output.
 *
 * @c: the character to be printed.
 *
 * Return: 1 on success; otherwise another number.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
