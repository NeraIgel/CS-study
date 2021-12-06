#include <stdio.h>
#define SIZE	8

int	main(void)
{
	double	arr1[SIZE];
	double	arr2[SIZE];
	double	sum;
	size_t	i;

	printf("Enter 8 numbers:\n");
	for (sum = 0.0, i = 0; i < SIZE; i++)
	{
		scanf("%lf", &arr1[i]);
		sum += arr1[i];
		arr2[i] = sum;
	}
	for (i = 0; i < SIZE; i++)
		printf("%.2f\t", arr1[i]);
	printf("\n");
	for (i = 0; i < SIZE; i++)
		printf("%.2f\t", arr2[i]);
	printf("\n");
	return (0);
}
