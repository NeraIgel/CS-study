#include <stdio.h>

void	Temperatures(double fahrenheit)
{
	const double	FHAR_TO_CEL_SCALE = 5.0 / 9.0;
	const double	FHAR_TO_CEL_OFFSET = -32.0;
	const double	CEL_TO_KEL_OFFSET = 273.16;
	double			celsius;
	double			kelvin;

	celsius = (fahrenheit + FHAR_TO_CEL_OFFSET) * FHAR_TO_CEL_SCALE;
	kelvin = celsius + CEL_TO_KEL_OFFSET;
	printf("%.2f degrees fahrenheit is %.2f degrees celsius or %.2f degrees kelvin.\n", fahrenheit, celsius, kelvin);
}

int	main(void)
{
	double	fahrenheit;

	printf("Enter a temperature in degrees fahrenheit (q to quit): ");
	while (1 == scanf("%lf", &fahrenheit))
	{
		Temperatures(fahrenheit);
		printf("Enter a temperature in degrees fahrenheit (q to quit): ");
	}
	return (0);
}
