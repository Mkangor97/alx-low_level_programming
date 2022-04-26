#include "main.h"

/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int y;

	while (*haystack != '\0')
	{
		y = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, y++;
		if (*needle == '\0')
			return (haystack - y);
		haystack -= (y - 1), needle -= y;
	}
	return ('\0');
}
