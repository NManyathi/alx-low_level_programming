#include "main.h"

/**
 * main - program that execute main.
 *
 * Return: Always 0 
 */
int main(void)
{
	int i = 0;
	char c[10] = "main";
	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
