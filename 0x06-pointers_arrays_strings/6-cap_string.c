#include "main.h"

/**
 *cap_string - capitalizes all words of a string.
 *@s: string to use.
 *
 *Return: string.
 */

char *cap_string(char *s)
{
	int y = 1, z, check;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[y] != '\0')
	{
		if (s[y] > 96 && s[y] < 123)
		{
			z = 0;
			check = 0;
			while (check == 0 && z < 13)
			{
				if (s[y - 1] == a[z])
				{
					check = 1;
				}
				z++;
			}
			if (check == 1)
			{
				s[y] -= 32;
			}
		}
		y++;
	}
return (s);
}
