#include <stdio.h>

int	main(void)
{
	float	GRAMS_H2O_MASS = 3.0e-23f;
	float	GRAMS_H2O_PER_QUART = 950.0f;
	float	quart;

	printf("Enter an amount of water (in quarts): ");
	scanf("%f", &quart);
	printf("There are %g molecules in %.1f quarts of water.\n", GRAMS_H2O_PER_QUART * quart / GRAMS_H2O_MASS, quart);
	return (0);
}
