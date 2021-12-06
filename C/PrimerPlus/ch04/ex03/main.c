#include <stdio.h>

int	main(void)
{
	float	f;

	printf("Enter a floating-point value: ");
	scanf("%f", &f);
	printf("%.1f or %.1e\n", f, f);
	printf("%+.3f or %.3E\n", f, f);
	return (0);
}
