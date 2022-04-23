#include "main.h"

/**
 *reverse_array - reverse an array.
 *@a: array.
 *@n: array's length.
 */

void reverse_array(int *a, int n)
{
	int y, z, tmp;

	z = n - 1;
	for (y = 0; y < n / 2; y++)
	{
		tmp = a[y];
		a[y] = a[z];
		a[z] = tmp;
		z--;
	}
}
