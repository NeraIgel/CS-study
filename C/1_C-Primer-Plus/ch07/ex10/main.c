#include <stdio.h>
#include <stdbool.h>

#define TAX_BRACKET_1		17850.0
#define TAX_BRACKET_2		23900.0
#define TAX_BRACKET_3		29750.0
#define TAX_BRACKET_4		14875.0
#define TAX_RATE_1			0.15
#define TAX_RATE_2			0.28

double  calculate_taxes(double income, double bracket)
{
	if (income > bracket)
		return ((income - bracket) * TAX_RATE_2 + bracket * TAX_RATE_1);
	else
		return (income * TAX_RATE_1);
}

int	main(void)
{
	int		category;
	bool	isExit;
	double	bracket;
	double	income;
	double	taxes;

	isExit = false;
	while (1)
	{
		printf("1) Single  2) Head of Household  3) Married, Joint  4) Married Separate\n");
		printf("Enter your tax category (1-4) or 5 to quit: ");
		scanf("%d", &category);
		switch (category)
		{
			case 1: bracket = TAX_BRACKET_1; break ;
			case 2: bracket = TAX_BRACKET_2; break ;
			case 3: bracket = TAX_BRACKET_3; break ;
			case 4: bracket = TAX_BRACKET_4; break ;
			case 5: isExit = true; break ;
			default: printf("Please enter an integer between 1 and 5.\n\n"); continue ;
		}
		if (isExit)
			break ;
		printf("Enter your income: ");
		scanf("%lf", &income);
		taxes = calculate_taxes(income, bracket);
		printf("taxes: $%.2f\n", taxes);
	}
	return (0);
}
