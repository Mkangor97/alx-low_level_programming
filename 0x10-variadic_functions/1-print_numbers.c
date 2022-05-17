#include "variadic_functions.h
#include <stdio.h>
#include <stdarg.h>

/* print_numbers - Function that prints numbers, followed by a new line.
 * @separator - The string to be printed between numbers.
 * @
 * n - The number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list parameters;
unsigned int i;

va_start(parameters, n);

for (i = 0; i < n; i++)
{
	 printf("%d", va_arg(parameters, int ));

	 if (i != (-1) && separator != NULL)
		 printf("%s", separator);
}
printf("\n");

va_end(parameters);
}
