#include <stdio.h>
#define ROWS	2
#define COLS	5

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
	double	source[ROWS][COLS] = {{1.1, 2.2, 3.3, 4.4, 5.5},
								  {6.6, 7.7, 8.8, 9.9, 0.0}};
	double	target[ROWS][COLS];
	int		i;

	for (i = 0; i < ROWS; i++)
	{
		copy_arr(target[i], source[i], COLS);
		display_arr(target[i], COLS);
	}
	return (0);
}
