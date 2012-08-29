//in a circle
#include <stdio.h>
#define MAX 10

int main(int argc, char const *argv[])
{
	int i, j, k;
	i = 0;
	j = 1;
	k = 3;
	int num = MAX;
	int circle[MAX] = {0};
	while (1)
	{
		if (circle[i] == 0)
		{
			if (!(j % k))
			{
				j = 1;
				circle[i] = 1;
				num--;
			}
			else
				j++;
		}
		
		i++;
		if (i >= MAX)
			i = 0;
		if (num <= 1)
			break;
	}

	for (i = 0; i < MAX; ++i)
		if (circle[i] == 0)
			printf("the last number is %d \n", i);
	return 0;
}