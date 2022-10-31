#include <stdio.h>

int	main(void)
{
	int		sum;
	int		cnt;
	int		max_cnt;

	printf("How many integers would you like to sum?: ");
	scanf("%d", &max_cnt);
	sum = 0;
	cnt = 0;
	while (cnt++ < max_cnt)
		sum += cnt;
	printf("sum = %d\n", sum);
	return (0);
}
