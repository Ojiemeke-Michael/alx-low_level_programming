#include "main.h"

/**
 * print_alphabet - to print all alphabets
 *
 *Return: 1, 0, -1.
 */
/*print_alphabet(void: to print alphabets*/
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
