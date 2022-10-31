#include <stdio.h>
#include <limits.h>
#include <float.h>

int	main(void)
{
	int				n;
	unsigned int	un;
	float			f;

	n = INT_MAX;
	printf("n : %d\n", n);
	n += 1;
	printf("n : %d\n", n);
	n = INT_MIN;
	printf("n : %d\n", n);
	n -= 1;
	printf("n : %d\n", n);
	printf("-------\n");
	un = UINT_MAX;
	printf("un : %u\n", un);
	un += 1;
	printf("un : %u\n", un);
	un = 0;
	printf("un : %u\n", un);
	un -= 1;
	printf("un : %u\n", un);
	printf("-------\n");
	f = FLT_MAX;
	printf("f : %f\n", f);
	f *= 10.0f;
	printf("f : %f\n", f);
	f = 0.000001f;
	printf("f : %f\n", f);
	f /= 10.0f;
	printf("f : %f\n", f);
	return (0);
}
