#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int maths;
	int phy;
	int chem;
	int total3;
	int total2;

	printf("Please enter scores for maths:\n");
	scanf("%d", &maths);
	printf("Please enter scores for physics:\n");
	scanf("%d", &phy);
	printf("Please enter scores for chemistry:\n");
	scanf("%d", &chem);
	printf("Please enter scores for the total of 3 subjects:\n");
	scanf("%d", &total3);
	printf("Please enter scores for the total of maths and physics:\n");
	scanf("%d", &total2);

	if (maths >= 65 && phy >= 55 && chem >= 50 && total3 >= 190)
		printf("The candidate is eligible for admission");
	else if (maths >= 65 && phy >= 55 && chem >= 50 && total2 >= 140)
		printf("The candidate is eligible for admission");
	else
		printf("The candidate is not eligible for admission.\n");

	return (0);
}
