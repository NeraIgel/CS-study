#include <stdio.h>

int	main(void)
{
	float	CM_PER_INCH = 2.54f;
	float	height_cm;

	printf("Enter your height (in centimeters): ");
	scanf("%f", &height_cm);
	printf("You are %.1f inches tall.\n", height_cm / CM_PER_INCH);
	return (0);
}
