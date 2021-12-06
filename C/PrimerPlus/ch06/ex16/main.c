#include <stdio.h>
#define PRINCIPLE			100
#define DAPHNE_INTEREST		0.1
#define DEIRDRE_INTEREST	0.05

int	main(void)
{
	size_t	years;
	double	daphne_balance;
	double	deirdre_balance;

	years = 0;
	daphne_balance = deirdre_balance = PRINCIPLE;
	do
	{
		// eq. for compound interest
		deirdre_balance *= 1.0 + DEIRDRE_INTEREST;
		// eq. for simple interest
		daphne_balance += PRINCIPLE * DAPHNE_INTEREST;
		years++;
	} while (deirdre_balance < daphne_balance);
	printf("after %zdyears, Daphne : %.2f / Deirdre : %.2f\n", years, daphne_balance, deirdre_balance);
	return (0);
}
