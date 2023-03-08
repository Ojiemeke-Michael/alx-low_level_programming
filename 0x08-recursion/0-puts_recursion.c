#include "main.h"

/**
 * _puts_recursion - this is a program that prints a string,
 * followed by a new line.
 *
 * Prototype: void _puts_recursion(char *s);
 * FYI: The standard library provides a similar function: "puts".
 *  Run "man puts" to learn more.
 *
 *  @s: the string to be printed (this is a character pointer).
 *
 *  Return: void.
 */
void _puts_recursion(char *s)
{
	if (s != NULL)
	{
		if (*s == '\0')
			return;
		else
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}
	}
}
