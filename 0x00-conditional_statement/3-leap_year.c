#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int year;

	printf("Please enter a year\n");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 == !0) || (year % 400 == 0))
		printf("%d is a leap year\n", year);
	else
		printf("%d is not a leap year\n", year);

	return (0);
}
