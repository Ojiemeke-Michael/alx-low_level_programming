#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * he _calloc function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL;
 *
 * @nmemb: number of individual blocks to allocate for each member.
 * @size: the size (in bytes) of each member/block.
 *
 * Return: on success, return pointer to the allocated memory.
 * on failure, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr  = (char *) malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
		exit(98);
	}

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
