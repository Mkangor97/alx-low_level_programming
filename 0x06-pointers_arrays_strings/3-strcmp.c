#include "main.h"

/**
 * _strcmp - compare two strings.
 *@s1: string 1.
 *@s2: string 2.
 *Return: int.
 */

int _strcmp(char *s1, char *s2)
{
	int y = 0, cmp = 0;

	while (s1[y] != '\0' && s2[y] != '\0' && cmp == 0)
	{
		cmp = s1[y] - s2[y];
		y++;
	}

	return (cmp);
}
