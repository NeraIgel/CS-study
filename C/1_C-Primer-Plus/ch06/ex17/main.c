#include <stdio.h>
#define PRINCIPLE	1000000
#define SPENDING	100000
#define INTEREST	0.08

int	main(void)
{
	size_t	years;
	double	balance;

	years = 0;
	balance = PRINCIPLE;
	do
	{
		balance *= 1.0 + INTEREST;
		balance -= SPENDING;
		years++;
	} while (balance > 0.0);
	printf("after %zdyears\n", years);
	return (0);
}
