#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h>"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @n: The number of integers passed to the function.
 * @separator: The string to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(parameters, int));


	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(parameters);
}
