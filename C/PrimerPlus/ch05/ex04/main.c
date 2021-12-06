#include <stdio.h>
#define CM_PER_INCH	2.54f
#define CM_PER_FEET	30.48f

int	main(void)
{
	float	height_cm;
	float	inches;
	int		feet;

	printf("Enter a height in centimeters (<=0 to quit): ");
	scanf("%f", &height_cm);
	while (height_cm > 0)
	{
		feet = height_cm / CM_PER_FEET;
		inches = (height_cm - feet * CM_PER_FEET) / CM_PER_INCH;
		printf("%.1f cm = %d feet, %.1f inches.\n", height_cm, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &height_cm);
	}
	return (0);
}
