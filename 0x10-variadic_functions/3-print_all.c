#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @parameters: valist
 */
void print_char(va_list parameters)
{
printf("%c", va_arg(parameters, int));
}

/**
 * print_int - prints int
 * @parameters: valist
 */
void print_int(va_list parameters)
{
	printf("%d", va_arg(parameters, int));
}

/**
 * print_float - prints float
 * @parameters: valist
 */
void print_float(va_list parameters)
{
	printf("%f", va_arg(parameters, double));
}

/**
 * print_string - prints string
 * @parameters: valist
 */
void print_string(va_list parameters)
{
	char *s;

	s = va_arg(parameters, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list parameters;

	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	/* iterate format; if datatype matched, access function via struct */
	va_start(parameters, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(parameters); /*access va_arg later*/
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(parameters);
	printf("\n");
}
