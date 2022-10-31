#include <stdio.h>
#define SIZE	5

double	get_difference(const double arr[], int n)
{
	double	max;
	double	min;
	int		i;

	for (max = min = arr[0], i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	return (max - min);
}

int	main(void)
{
	double	arr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};

	printf("The difference between the largest and smallest values is %.1f.\n", get_difference(arr, SIZE));
	return (0);
}
