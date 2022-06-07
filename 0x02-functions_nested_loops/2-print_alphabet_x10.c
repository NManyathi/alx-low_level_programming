#include "main.h"

/**
 * print_alphabet_x10 - fun
 * Print the alphabet, in lowercase, followed by new line
 * You can only use _putchr twice in your code
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int b = 0;
	while (b < 10)
	{
		char a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
