#include <stdio.h>

int	main(void)
{
	double	d1;
	double	d2;

	printf("Enter two floating-point numbers (enter non-numeric to quit): ");
	while (2 == scanf("%lf %lf", &d1, &d2))
	{
		printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n", d1, d2, d1, d2, (d1 - d2) / (d1 * d2));
		printf("Enter two floating-point numbers (enter non-numeric to quit): ");
	}
	return (0);
}
