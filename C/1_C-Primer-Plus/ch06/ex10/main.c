#include <stdio.h>

int	main(void)
{
	int		lower;
	int		upper;
	int		i;
	double	sum;

	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &lower, &upper);
	while (lower < upper)
	{
		for (sum = 0.0, i = lower; i <= upper; i++)
			sum += i * i;
		printf("The sums of the squares from %.0f to %.0f is %.0f\n", (double)lower * lower, (double)upper * upper, sum);
		printf("Enter lower and upper integer limits: ");
		scanf("%d %d", &lower, &upper);
	}
	printf("done!\n");
	return (0);
}
