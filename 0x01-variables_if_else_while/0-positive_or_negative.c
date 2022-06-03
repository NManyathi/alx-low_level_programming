#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number less than 0: is negative, followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
