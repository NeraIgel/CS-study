#include <stdio.h>
#include <float.h>

int	main(void)
{
	float	f;
	double	d;

	f = 1.0f / 3.0f;
	d = 1.0 / 3.0;
	printf("Float              Double            \n");
	printf("------------------ ------------------\n");
	printf("%-18d %-18d\n", FLT_DIG, DBL_DIG);
	printf("%-18.4f %-18.4f\n", f, d);
	printf("%-18.12f %-18.12f\n", f, d);
	printf("%-18.16f %-18.16f\n", f, d);
	return (0);
}
