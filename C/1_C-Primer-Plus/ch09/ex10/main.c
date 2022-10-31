#include <stdio.h>

void	to_base_n(unsigned long n, unsigned int base)
{
	if (n >= base)
		to_base_n(n / base, base);
	putchar(n % base + '0');
}

int	main(void)
{
	unsigned long	n;
	unsigned int	base;

	printf("Enter a positive number in base 10 and a base to convert to: ");
	while (scanf("%lu %u", &n, &base) == 2)
	{
		to_base_n(n, base);
		putchar('\n');
		printf("Enter a positive number in base 10 and a base to convert to: ");
	}
	return (0);
}
