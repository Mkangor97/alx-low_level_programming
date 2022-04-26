#include "main.h"

/*
 * _strspn - gets the length of a prefix substring
 * @s: string input to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of the prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int y, z, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (y = 0; s[y] != '\0'; y++)
		for (z = 0; z < a_len; z++)
			if (s[y] == accept[z])
				len++, z = a_len;
			else
				if (z == a_len - 1)
					goto exit;
exit: return (len);
}
