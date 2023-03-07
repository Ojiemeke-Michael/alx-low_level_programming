#include "main.h"

/**
 * _memset - this is a function that fills memory with a constant byte.
 *
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 *
 * @s: this is the memory to be filled up.
 * @b: this is the filling character i.e. the character to be used for filling
 * @n: This variable gives us the number of the first n characters to fill up
 *
 * Return: A pointer to the memory area "s"
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter; /* this helps us go through each char in the variable s */

	for (counter = 0; counter < n; counter++)
	{
		*(s + counter) = b;
	}

	return (s);
}
