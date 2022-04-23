#include "main.h"

/**
 *leet - encodes a string into 1337.
 *@s: string to encode.
 *Return: the encoded string.
 */

char *leet(char *s)
{
	int y = 0, z = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (s[y] != '\0')
	{
		for (z = 0; z < 5; z++)
		{
			if (s[y] == array_low[z] || s[y] == array_up[j])
				s[y] = array_leet[z];
		}
		y++;
	}

	return (s);
}

