#include <stdio.h>
#define MAX 1000

int main(int argc, char const *argv[])
{
	char a[MAX], b[MAX];
	int c[MAX];
	int a_num, b_num, c_num;
	int i, t;
	char c_input;

	a_num = b_num = 0;
	for (c_num = 0; c_num < MAX; ++c_num)
		c[c_num] = 0;
	while ((c_input = getchar()) != '\n' && a_num < MAX)
	{
		a[a_num] = c_input;
		a_num++;
	}
	a[a_num] = '\0';
	printf("%s %d\n", a, a_num);

	for (i = 0; i < a_num; ++i)
	{
		for (t = 0; t < b_num; t++)
		{
			if (b[t] == a[i])
			{
				c[t]++;
				break;
			}
		}
		if (t == b_num)
		{
			b[t] = a[i];
			c[t]++;
			b_num++;
		}
	}

	

	for (t = 0; t < b_num; t++)
		printf("the character %c has %d times\n", b[t], c[t]);
	return 0;
}