#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Successful)
 */
int main(void)
{
	int x = 12;
	int y = 16;

	if (x <= 9 && y <= 9)
		printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
	else if ((x >= 10 && x < 20) && (y >= 10 && y < 20))
		printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
	else if ((x >= 20 && x < 30) && (y >= 20 && y < 30))
		printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
	else if ((x >= 30 && x < 40) && (y >= 30 && y < 40))
		printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
	else
		printf("The coordinate point is undetermined!\n");
	return (0);
}
