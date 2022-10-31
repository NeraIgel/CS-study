#include <stdio.h>
#define MIN_PER_HOUR	60

int	main(void)
{
	int		min;

	printf("Enter an amount of time in minutes (<=0 to quit): ");
	scanf("%d", &min);
	while (min > 0)
	{
		printf("%d minute(s) is %d hour(s) and %d minute(s).\n", min, min / MIN_PER_HOUR, min % MIN_PER_HOUR);
		printf("Enter an amount of time in minutes (<=0 to quit): ");
		scanf("%d", &min);
	}
	return (0);
}
