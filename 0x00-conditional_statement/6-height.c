#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int height = 135;

	if (height < 150)
		printf("The person is very short\n");
	else if (height >= 150 && height <= 159)
		printf("The person is very short\n");
	else if (height >= 160 && height <= 169)
		printf("The person is mid height\n");
	else if (height >= 170 && height <= 179)
		printf("The person is tall\n");
	else if (height >= 180 && height <= 189)
		printf("The person is very tall\n");
	else
		printf("The person is extremely tall\n");
	return (0);
}
