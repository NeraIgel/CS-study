#include <stdio.h>

void	copy_arr(double target[], double source[], int n)
{
	int		i;

	for (i = 0; i < n; i++)
		target[i] = source[i];
}

void	display_arr(const double *arr, int n)
{
	int		i;

	for (i = 0; i < n; i++)
		printf("%.1f ", arr[i]);
	printf("\n");
}

int	main(void)
{
	double	source[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double	target[3];

	copy_arr(target, &source[2], 3);
	display_arr(target, 3);
	return (0);
}
