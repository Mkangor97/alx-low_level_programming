#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)
	{
		s[y] = b;
		y++;
	}
	return (s);
}
