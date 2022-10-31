#include <stdio.h>

int	main(void)
{
	int		n;
	int		divisor;

	printf("Enter an integer to serve as the second operand (e.g divisor): ");
	scanf("%d", &divisor);
	printf("Enter an integer to serve as the first operand (<=0 to quit): ");
	scanf("%d", &n);
	while (n > 0)
	{
		printf("%d %% %d = %d\n", n, divisor, n % divisor);
		printf("Enter an integer to serve as the first operand (<=0 to quit): ");
		scanf("%d", &n);
	}
	return (0);
}
