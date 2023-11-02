#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num = 19;
	int remainder;

	remainder = num % 2;

	if (remainder == 0)
		printf("Number is even\n");
	else
		printf("Number is odd\n");

	return (0);
}
