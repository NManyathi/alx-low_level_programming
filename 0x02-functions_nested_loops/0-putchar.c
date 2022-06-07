#include "School.s"

/**
 * main - program that prints School.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char str_hbt[9] = "School";

	while (n < 9)
	{
		_putchar(str_hbt[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
