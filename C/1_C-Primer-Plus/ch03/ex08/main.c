#include <stdio.h>

int	main(void)
{
	float	PINTS_PER_CUP = 0.5f;
	float	OUNCES_PER_CUP = 8.0f;
	float	TABLESPOONS_PER_CUP = 2.0f * OUNCES_PER_CUP;
	float	TEASPOONS_PER_CUP = 3.0f * TABLESPOONS_PER_CUP;
	float	cups;

	printf("Enter an amount of cups: ");
	scanf("%f", &cups);
	printf("%.1f cups in equivalent to:\n", cups);
	printf("%.1f pints\n", PINTS_PER_CUP * cups);
	printf("%.1f ounces\n", OUNCES_PER_CUP * cups);
	printf("%.1f tablespoons\n", TABLESPOONS_PER_CUP * cups);
	printf("%.1f teaspoons\n", TEASPOONS_PER_CUP * cups);
	return (0);
}
