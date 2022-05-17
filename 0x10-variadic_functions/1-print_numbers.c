#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print varying amount of numbers
 * @separator: The string to be printed between numbers
 * @n: number of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	if (n > 0)
	{
		va_start(number, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(number, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(number);
	}
	printf("\n");
}
