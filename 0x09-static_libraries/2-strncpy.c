#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y = 0, z = 0;

	while (n > z)
	{
		if (src[z] == '\0')
		{
			for (; z < n; z++)
			{
				dest[y] = '\0';
				y++;
			}
		}
		else
		{
			dest[y] = src[z];
			z++;
			y++;
		}
	}

	return (dest);
}
