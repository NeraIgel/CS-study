#include <stdio.h>
#define SIZE	5

void	reverse_arr(double *arr, int n)
{
	double	tmp;
	int		i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
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
	double	arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};

	reverse_arr(arr, SIZE);
	display_arr(arr, SIZE);
	return (0);
}
