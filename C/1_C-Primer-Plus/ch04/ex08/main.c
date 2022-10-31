#include <stdio.h>
#define LITTER_PER_GALLON	3.785f
#define KM_PER_MILE			1.609f

int	main(void)
{
	float		mile;
	float		gallon;

	printf("Enter your distance travelled in miles: ");
	scanf("%f", &mile);
	printf("Enter the amount of gas consumed in gallons: ");
	scanf("%f", &gallon);
	printf("Miles per gallon : %.1f\n", mile / gallon);
	printf("Liters per 100 km : %.1f\n", (LITTER_PER_GALLON * gallon) / (KM_PER_MILE * mile) * 100.0f);
	return (0);
}
