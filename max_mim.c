/*find the max and mim number in the array*/
#include <stdio.h>
#define LEN 4

int main(int argc, char const *argv[])
{
	int num[LEN] = {0};
	char num_input;
	int max, mim;
	int i;

	for (i = 0; i < LEN; ++i)
		scanf("%d", &num[i]);
	
	for (i = 0; i < LEN; ++i)
	{
		if (num[i] > max)
			max = num[i];
		else if (num[i] < mim)
			mim = num[i];
	}

	printf("the max number and the mim number in the array are %d and %d\n", max, mim);

	return 0;
}