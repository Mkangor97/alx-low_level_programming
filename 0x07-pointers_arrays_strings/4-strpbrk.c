#include "main.h"

/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int y, z;

	for (y = 0; s[y] != '\0'; y++)
		for (z = 0; accept[z] != '\0'; z++)
			if (s[y] == accept[z])
				goto exit;
exit: return (s[y] != '\0' ? s + y : '\0');
}
