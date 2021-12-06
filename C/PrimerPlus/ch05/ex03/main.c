#include <stdio.h>
#define DAYS_PER_WEEK	7

int	main(void)
{
	int		days;

	printf("Enter a number of days (<=0 to quit): ");
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d day(s) is %d week(s) and %d day(s).\n", days, days / DAYS_PER_WEEK, days % DAYS_PER_WEEK);
		printf("Enter a number of days (<=0 to quit): ");
		scanf("%d", &days);
	}
	return (0);
}
