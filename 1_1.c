#include <stdio.h>
#define Lower 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
	int f, step, mim, max;
	float c;
	mim = 0;
	max = 300;
	f = mim;
	step = 20;
	printf("  f   c\n");
	while (f <= max)
	{
		c = 5.0 * (f - 32) / 9.0;
		printf("%3d   %10.1f \n", f, c);
		f = f + step;
	}
	for ( ; f >= mim; f -= step)
	{
		c = 5.0 * (f - 32) / 9.0;
		printf("%3d   %10.1f \n", f, c);

		/* code */
	}
	return 0; 
}