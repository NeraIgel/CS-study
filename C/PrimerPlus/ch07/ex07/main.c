#include <stdio.h>

#define BASIC_RATE			10.0
#define OVERTIME_HOURS		40
#define OVERTIME_MULTIPLIER	1.5
#define TAX_BRACKET_1		300.0
#define TAX_BRACKET_2		450.0
#define TAX_RATE_1			0.15
#define TAX_RATE_2			0.20
#define TAX_RATE_3			0.25

double	calculate_gross_pay(size_t hours)
{
	if (hours > OVERTIME_HOURS)
		return (OVERTIME_HOURS * BASIC_RATE + (hours - OVERTIME_HOURS) * BASIC_RATE * OVERTIME_MULTIPLIER);
	else
		return (hours * BASIC_RATE);
}

double	calculate_taxes(double gross_pay)
{
	if (gross_pay > TAX_BRACKET_2)
		return ((gross_pay - TAX_BRACKET_2) * TAX_RATE_3 + (TAX_BRACKET_2 - TAX_BRACKET_1) * TAX_RATE_2 + TAX_BRACKET_1 * TAX_RATE_1);
	else if (gross_pay > TAX_BRACKET_1)
		return ((gross_pay - TAX_BRACKET_1) * TAX_RATE_2 + TAX_BRACKET_1 * TAX_RATE_1);
	else
		return (gross_pay * TAX_RATE_1);
}

int	main(void)
{
	size_t	hours;
	double	taxes;
	double	gross_pay;

	printf("Enter number of hours worked in a week: ");
	scanf("%zd", &hours);
	gross_pay = calculate_gross_pay(hours);
	taxes = calculate_taxes(gross_pay);
	printf("gross pay: $%.2f\n", gross_pay);
	printf("net pay: $%.2f\n", gross_pay - taxes);
	printf("taxes: $%.2f\n", taxes);
	return (0);
}
