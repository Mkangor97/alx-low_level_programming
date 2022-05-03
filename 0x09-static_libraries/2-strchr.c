#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to find
 * Return: pointer to first occurence of c character
 */

char *_strchr(char *s, char c)
{
	unsigned int y;

	for (y = 0; s[y] != '\0'; y++)
		if (s[y] == c)
			break;
	return (s[y] == c ? (s + y) : '\0');
}
