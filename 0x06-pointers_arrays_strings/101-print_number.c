#include "main.h'

/**
 * print number - print number using _putchar.
 * @n: the number to be printed.
 */

void print_number(int n)
{
	unsigned int y = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while ((n / y) >= 10)
			y *= 10;

		while (y > 0)
		{
			_putchar((n / y) + '0');
			n %= y;
			y /= 10;
		}
	}
}
