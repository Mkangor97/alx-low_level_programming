#include "main.h"

/**
 * _memeset() - fills string with constant char b upto n bytes
 * @b: constant char
 * @n: number of bytes
 * Retutn: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)
	{
		s[y] = b;
		y++;
	}
	return(s);
}
