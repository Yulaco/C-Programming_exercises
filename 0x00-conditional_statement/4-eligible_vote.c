#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int age;

	printf("Please enter your age.\n");
	scanf("%d", &age);

	if (age >= 18)
		printf("You are %d, you are old enough to vote.\n", age);
	else
		printf("Please, wait until you are old enough to vote!\n");

	return (0);
}
