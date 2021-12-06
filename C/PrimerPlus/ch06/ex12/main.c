#include <stdio.h>

int	main(void)
{
	int		n;
	int		i;
	int		sign;
	double	sum1;
	double	sum2;

	printf("Enter a number of terms to sum (<=0 to quit): ");
	scanf("%d", &n);
	while (n > 0)
	{
		sign = 1;
		sum1 = sum2 = 0.0;
		for (i = 1; i <= n; i++)
		{
			sum1 += 1.0 / i;
			sum2 += 1.0 / i * sign;
			sign *= -1;
		}
		printf("The %dth partial sum for series1 is: %.2f\n", n, sum1);
		printf("The %dth partial sum for series2 is: %.2f\n", n, sum2);
		printf("Enter a number of terms to sum (<=0 to quit): ");
		scanf("%d", &n);
	}
	return (0);
}
