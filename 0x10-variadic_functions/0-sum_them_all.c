#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
        va_list parameter;
        unsigned int i, sum = 0;

        va_start(parameter, n);

        for (i = 0; i < n; i++)
                sum += va_arg(parameter, int);

        va_end(parameter);

        return (sum);
}

