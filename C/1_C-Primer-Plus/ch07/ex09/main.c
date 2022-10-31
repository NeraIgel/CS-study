#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	int		n;
	int		i;
	int		div;
	bool	isPrime;

	printf("Enter an integer: ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		for (div = 2, isPrime = true; (div * div) <= i; div++)
		{
			if (i % div == 0)
			{
				isPrime = false;
				break ;
			}
		}
		if (isPrime)
			printf("%d\n", i);
	}
	return (0);
}
