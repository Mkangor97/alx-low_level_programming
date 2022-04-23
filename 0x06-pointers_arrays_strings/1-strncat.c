#include "main.h"

/**
 *_strncat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int y = 0, z = 0;

	while (dest[y] != '\0')
		y++;

	while (src[z] != '\0' && n > z)
	{
		dest[y] = src[z];
		z++;
		y++;
	}
	if (n > 0)
	{
		dest[y] = '\0';
	}

	return (dest);
}
