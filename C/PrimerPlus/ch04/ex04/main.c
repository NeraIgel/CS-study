#include <stdio.h>
#define CM_PER_METER	100

int	main(void)
{
	float		height_cm;
	char		name[40];

	printf("What is your name?: ");
	scanf("%s", name);
	printf("What is your height in centimeters?: ");
	scanf("%f", &height_cm);
	printf("%s, you are %.2f meters tall.\n", name, height_cm / CM_PER_METER);
	return (0);
}
