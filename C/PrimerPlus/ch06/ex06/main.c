#include <stdio.h>

int	main(void)
{
	int		lower;
	int		upper;
	int		i;

	printf("Enter lower and upper integer limits (in that order): ");
	scanf("%d %d", &lower, &upper);
	for (i = lower; i <= upper; i++)
		printf("%d %.0f %.0f\n", i, (double)i * i, (double)i * i * i);
	return (0);
}
