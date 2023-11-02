#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = -43;

	if (num > 0)
		printf("Number is positive\n");
	if (num < 0)
		printf("Number is negative\n");
	else
		printf("Number is zero\n");
	return (0);
}
