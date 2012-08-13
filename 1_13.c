#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n, c;
	i = n = 0;
	int num[10];

	for (i = 0; i < 9; ++i)
	{
		num[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			++num[c-'0'];

	}
	printf("the number is :\n");
	for (n = 0; n < 9; n++)
		printf("%d\n", num[n]);

	return 0;
}