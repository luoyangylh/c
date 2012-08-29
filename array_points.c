#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a[3][2] = {{1,2},{2,3},{4,5}};
	int (*p)[2];
	p = a;
//
//	printf("the array[0] means %d\n", a[1][1]);

	printf("the array[0] means %d\n", a);
	return 0;
}