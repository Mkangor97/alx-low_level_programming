#include "main.h"

/**
 * _memcpy() - input
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of bytes
 * Return: pointer to string destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int y = 0;

	while (y < n)
	{
		*(dest + y) = *(src + y)
                y++;
	}
	return (dest);
}
