#include <stdio.h>
#define MAX 10

void lmove (int *num, int n);

int main(int argc, char const *argv[])
{
	int i, t;
	int num[MAX];
	int nmove = 3;

	for (i = 0; i < MAX; ++i)
	{
		num[i] = i;
		printf("%d", num[i]);
	}	
	printf("\n");

	for (i = 0; i < nmove; ++i)
	{
		lmove(num, MAX);
		for (t = 0; t < MAX; ++t)
			printf("%d", num[t]);
		putchar('\n');
	}
	putchar('\n');

	for (i = 0; i < MAX; ++i)
		printf("%d\n", num[i]);

	return 0;
}

void lmove (int *num, int n)
{
	int *p, temp;
	int i;

	temp = *num;
	p = num;
	
	for (i = 0; i < n-1; ++i)
	{
		*p = *(p+1);
		p++;
	}

	*p = temp;

}