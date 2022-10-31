#include <stdio.h>

double	power(double n, int p)
{
	if (p == 0)
		return (1);
	else if (p > 0)
		return (n * power(n, p - 1));
	else
		return ((1 / n) * power(n, p + 1));
}

int	main(void)
{
	double	base;
	double	output;
	int		exponent;

	printf("Enter a :double: base and :int: exponent: ");
	while (scanf("%lf %d", &base, &exponent) == 2)
	{
		output = power(base, exponent);
		printf("%.2f ^ %d = %.2f \n", base, exponent, output);
		printf("Enter a :double: base and :int: exponent: ");
	}
	return (0);
}
