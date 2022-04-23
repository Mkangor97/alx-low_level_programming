#include "main.h"

/**
 *leet - encodes a string into 1337.
 *@s: string to encode.
 *Return: the encoded string.
 */

char *leet(char *)
{
	int y = 0, z = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'O', 'T', 'L'};
	char array_low[] = {'a', 'e', 'o', 't', 'l'};

	while (s[y] != '\0')
	{
		for (z = 0; z < 5; z++)
		{
			if (s[y] == array_low[z] || s[y] == array_up[z])
				s[y] = array_leet[z];
		}
		y++;
	}

	return (s);
}

