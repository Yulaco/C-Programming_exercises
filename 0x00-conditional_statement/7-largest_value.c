#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num1, num2, num3;

	printf("Please enter 3 values.\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	if (num1 >= num2 && num1 >= num3)
		printf("1st Number = %d\n", num1);
	else if (num2 >= num1 && num2 >= num3)
		printf("2nd Number = %d\n", num2);
	else if (num3 >= num1 && num3 >= num2)
		printf("3rd Number = %d\n", num3);
	else
		printf("Please enter a number again!\n");

	return (0);
}
