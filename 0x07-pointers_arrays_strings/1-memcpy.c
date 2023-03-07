#include "main.h"

/**
 * _memcpy - this is a program that copies memory area.
 *
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 * Returns a pointer to dest
 * FYI: The standard library provides a similar function: memcpy
 * Run man memcpy to learn more.
 *
 * @dest: the variable to which contents are copied
 * @src: the variable whose contents are copied
 * @n: this is the first n characters that are taken from src.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter; /* this goes through each character of src & dest */

	for (counter = 0; counter < n; counter++)
	{
		*(dest + counter) = *(src + counter);
	}

	return (dest);
}
