#include <stdio.h>
#define SIZE	8

int	main(void)
{
	int		arr[SIZE];
	size_t	i;

	printf("Enter 8 integers:\n");
	for (i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);
	for (i = SIZE; i-- > 0; )
		printf("%d ", arr[i]);
	printf("\n");
	return (0);
}
