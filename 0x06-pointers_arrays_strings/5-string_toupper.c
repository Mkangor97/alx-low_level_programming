#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: string to modify.
 *
 *Return: s modified.
 */

char *string_toupper(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		if (s[y] > 96 && s[y] < 123)
		{
			s[y] -= 32;
		}
		y++;
	}

	return (s);
}
