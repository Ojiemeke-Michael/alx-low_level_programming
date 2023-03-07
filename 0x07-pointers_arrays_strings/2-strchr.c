#include "main.h"

/**
 * _strchr - this is a program that locates a character in a string.
 *
 * Prototype: char *_strchr(char *s, char c);
 * Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * FYI: The standard library provides a similar function: "strchr"
 *
 * @s: the string to be searched.
 * @c: the character used for searching.
 *
 * Return: a pointer to the character 'c', if not, return "NULL"
 */
char *_strchr(char *s, char c)
{
	char * search_ptr; /* this is the pointer to be return when 'c' is found */
	int count; /* this helps us go through each of s characters */

	if (s != NULL)
	{
		count = 0;
		while (*(s + count) != '\0')
		{
			if (*(s + count) == c)
			{
				search_ptr = (s + count);
				break;
			}

			count++;
		}

		return (search_ptr);
	}
	else
		return (NULL);
}
