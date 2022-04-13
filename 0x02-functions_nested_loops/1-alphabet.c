#include "main.h"

<<<<<<< HEAD
/*print_alphabet_x10 - a function that prints 10 times the alphabet, in lowecase
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter;

while (count++ <= 9)
{
for (letter - 'a'; letter <= 'z'; letter++;
_putchar(letter);
_putchar(\n);
}
=======
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');

>>>>>>> 61d8e711cf2a184b33c91a5df032f88cbcffa2bf
}
