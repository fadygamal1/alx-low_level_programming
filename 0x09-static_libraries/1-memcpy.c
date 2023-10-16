#include "main.h"

/**
 * _memcpy - Copies memory from 'src' to 'dest'.
 * @dest: Destination memory.
 * @src: Source memory.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
