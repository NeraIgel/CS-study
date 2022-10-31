#include <stdio.h>
#include <stdbool.h>

#define RATE_1				8.75
#define RATE_2				9.33
#define RATE_3				10.0
#define RATE_4				11.20
#define OVERTIME_HOURS		40
#define OVERTIME_MULTIPLIER	1.5
#define TAX_BRACKET_1		300.0
#define TAX_BRACKET_2		450.0
#define TAX_RATE_1			0.15
#define TAX_RATE_2			0.20
#define TAX_RATE_3			0.25

double	calculate_gross_pay(size_t hours, double rate)
{
	if (hours > OVERTIME_HOURS)
		return (OVERTIME_HOURS * rate + (hours - OVERTIME_HOURS) * rate * OVERTIME_MULTIPLIER);
	else
		return (hours * rate);
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

void	flush_input_buffer(void)
{
	while (getchar() != '\n')
		;
}

int	get_choice(void)
{
	int		ch;

	ch = getchar();
	flush_input_buffer();
	return (ch);
}

int	main(void)
{
	int		choice;
	bool	isExit;
	size_t	hours;
	double	rate;
	double	taxes;
	double	gross_pay;

	isExit = false;
	while (1)
	{
		printf("*****************************************************************\n");
		printf("Enter the character corresponding to the desired pay rate or action:\n");
		printf("a) $%.2f 				b) $%.2f\n", RATE_1, RATE_2);
		printf("c) $%.2f 				d) $%.2f\n", RATE_3, RATE_4);
		printf("q) quit \n");
		printf("*****************************************************************\n");
		choice = get_choice();
		switch (choice)
		{
			case 'a': rate = RATE_1; break ;
			case 'b': rate = RATE_2; break ;
			case 'c': rate = RATE_3; break ;
			case 'd': rate = RATE_4; break ;
			case 'q': isExit = true; break ;
			default: printf("Invalid valid input. Try again.\n\n"); continue ;
		}
		if (isExit)
			break ;
		printf("Enter number of hours worked in a week: ");
		scanf("%zd", &hours);
		flush_input_buffer();
		gross_pay = calculate_gross_pay(hours, rate);
		taxes = calculate_taxes(gross_pay);
		printf("gross pay: $%.2f\n", gross_pay);
		printf("net pay: $%.2f\n", gross_pay - taxes);
		printf("taxes: $%.2f\n", taxes);
	}
	return (0);
}
