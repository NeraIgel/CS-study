#include <stdio.h>
#define SIZE	5

void	copy_arr(double target[], double source[], int n)
{
	int		i;

	for (i = 0; i < n; i++)
		target[i] = source[i];
}

void	copy_ptr(double *target, double *src_start, double *src_end)
{
	while (src_start < src_end)
		*target++ = *src_start++;
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
	double	source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double	target1[SIZE];
	double	target2[SIZE];
	double	target3[SIZE];

	copy_arr(target1, source, SIZE);
	copy_arr(target2, source, SIZE);
	copy_ptr(target3, source, source + SIZE);
	display_arr(target1, SIZE);
	display_arr(target2, SIZE);
	display_arr(target3, SIZE);
	return (0);
}
