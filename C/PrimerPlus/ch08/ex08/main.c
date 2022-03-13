#include <stdio.h>

void	print_menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add            s. subtract\n");
	printf("m. multiply       d. divide\n");
	printf("q. quit\n");
}

void	flush_input_buffer(void)
{
	while (getchar() != '\n')
		;
}

float	get_number(void)
{
	int		ch;
	float	num;

	while (scanf("%f", &num) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a number.\n");
		printf("Please enter a number, such as 22.4 or 1: ");
	}
	flush_input_buffer();
	return (num);
}

int	main(void)
{
	int		operation;
	float	operand1;
	float	operand2;

	print_menu();
	while ((operation = getchar()) != 'q')
	{
		flush_input_buffer();
		printf("Enter first number: ");
		operand1 = get_number();
		printf("Enter second number: ");
		operand2 = get_number();
		switch (operation)
		{
			case 'a':
				printf("%.2f + %.2f = %.2f\n", operand1, operand2, operand1 + operand2);
				break ;
			case 's':
				printf("%.2f - %.2f = %.2f\n", operand1, operand2, operand1 - operand2);
				break ;
			case 'm':
				printf("%.2f * %.2f = %.2f\n", operand1, operand2, operand1 * operand2);
				break ;
			case 'd':
				while (!operand2)
				{
					printf("Enter a number other than 0: ");
					operand2 = get_number();
				}
				printf("%.2f / %.2f = %.2f\n", operand1, operand2, operand1 / operand2);
				break ;
			default:
				printf("Invalid valid input. Try again.\n");
				break ;
		}
		print_menu();
	}
	return (0);
}
