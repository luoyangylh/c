#include <stdio.h>
#include <stdlib.h>
#define POWER 4
int powr(int base, int power);

int main(int argc, char const *argv[])
{
	int (*p)[POWER];
	int line = 10;
	int i, t, k;

	p = malloc (40 * sizeof(int));

	if(!p)
	{
		printf("the memory request is failed.\n");
		exit (-1);
	}

	for (i = 0; i < line; ++i)
	{
		for (t = 0; t < POWER; ++t)
			*(*(p+i)+t) = powr(i, t);
	}

	for (i = 0; i < line; ++i)
	{
		printf("the number %d's power are\n", i );
		for (t = 0; t < POWER; ++t)
			printf("%d  \n", *(*(p+i)+t));
	}
	return 0;
}

int powr (int base, int power)
{
	int output = 1;
	int inum;

	for (inum = 0; inum < power; ++inum)
		output *= base;
	return output;
}