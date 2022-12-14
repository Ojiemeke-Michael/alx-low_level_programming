#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n elements of an array of integers
 * followed by a new line
 *
 * @a: first integer
 * @n: second integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && *(a + i) != '\0'; i++)
	{
		printf("%d", *(a + 1));
		if (i == n - 1)
		{
			printf("\n");
		}
		else
		{
		printf(", ");
		}
	}
}
