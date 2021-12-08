#include <stdio.h>

int	main(void)
{
	int		n;
	int		odd_sum = 0;
	int		even_sum = 0;
	size_t	odd_count = 0;
	size_t	even_count = 0;

	printf("Enter integers (0 to stop):\n");
	while (scanf("%d", &n) == 1 && n)
	{
		if (n % 2)
		{
			odd_count++;
			odd_sum += n;
		}
		else
		{
			even_count++;
			even_sum += n;
		}
	}
	printf("Number of odd integers: %zd\n", odd_count);
	printf("Average value of odd integers: %.2f\n", (float)odd_sum / odd_count);
	printf("Number of even integers: %zd\n", even_count);
	printf("Average value of even integers: %.2f\n", (float)even_sum / even_count);
	return (0);
}
