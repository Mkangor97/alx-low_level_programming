#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of #'s in diagnols of square
 * @a: input square array
 * @size: size of one dimension in array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int y, z, sum1 = 0, sum2 = 0;

	for (z = 0, y = size - 1; z < (size * size); z += size + 1, y += size - 1)
		sum1 += a[z], sum2 += a[y];
	printf("%d, %d\n", sum1, sum2);
}
