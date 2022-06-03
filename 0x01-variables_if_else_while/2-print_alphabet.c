#include <stdio.h>
#include <ctype.h>

/**
 * main - execute program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
