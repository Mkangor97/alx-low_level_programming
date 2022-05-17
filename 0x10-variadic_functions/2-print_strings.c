#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print varying strings argument
 * @separator: The string to be printed between numbers
 * @n: number of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(number, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(number, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(number);

	}
	printf("\n");
}
