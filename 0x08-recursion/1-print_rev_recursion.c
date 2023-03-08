#include "main.h"

/**
 * _print_rev_recursion - this is a program that prints a string in reverse.
 *
 * Prototype: void _print_rev_recursion(char *s);
 *
 * @s: the string which is to be printed in reverse
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (s != NULL)
	{
		if (*s == '\0')
			return;

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
