#include <stdio.h>
int binsearch(int x, int v[], int n);
int binsearch2(int x, int v[], int n);

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n1]
*/
int binsearch(int x, int v[], int n)
{
	printf("the compare has began\n");
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low+high)/2;
		printf("%d\n", mid);
		if (x < v[mid])
			high = mid + 1;
		else if (x > v[mid])
			low = mid + 1;
		else /* found match */
			return mid;
	}
	printf("the compare has end\n");
	return -1;
	/* no match */
}

int binsearch2(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n -1;
	mid = (low + high) / 2;
	while ( low < high && x != v[mid])
	{
		if (x < v[mid])
		{
			high = mid - 1;
			mid = (low + high) / 2;
		}
		else
		{
			low = mid + 1;
			mid = (low + high) / 2;
		}
	}
	if (x == v[mid])
		return mid;
	else
		return -1;
}

int main(int argc, char const *argv[])
{
	int i, x = 2;
	int v[10];
	int output;
	int output2;

	for (i = 0; i < 10; ++i)
	{
		/* code */
		v[i] = i;
	}
	output = binsearch(x, v, 10);
	printf("%d\n", v[1]);
	printf("the output is %d \n", output);
	output2 = binsearch2(x, v, 10);
	printf("the output2 is %d \n", output2);


	return 0;
}