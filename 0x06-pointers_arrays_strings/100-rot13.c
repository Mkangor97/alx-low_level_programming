#include "main.h"

/**
 *rot13 - encoding a string using rot13.
 *@s: the string to be encoded to rot13.
 *Return: the string s encoded to rot13.
 */

char *rot13(char *s)
{
	int y = 0, z = 0;
	char string_rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char string_alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	while (s[y] != '\0')
	{
		do
		{
			if (s[y] == string_alpha[z])
			{
				s[y] = string_rot13[z];
				break;
			}
			j++;
		}
		while (string_alpha[z] != '\0');
		z = 0;
		y++;
	}
	return (s);
}
