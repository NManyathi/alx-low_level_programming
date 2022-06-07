#include "main.h"

/**
 * print_alphabet - Entry point
 * Print the alphabet, in lowercase, followed by new line
 * You can only use _putchr twice in your code
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
