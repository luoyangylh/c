#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int sort(int array[], int limit);
int print(int array[], int limit);

int main(int argc, char const *argv[])
{
	int array[MAX];
	int i; 
	for (i = 0; i < MAX; ++i)
	{
		array[i] = rand() % 100 + 1;
	}
	printf("the former array:\n");
	print(array, MAX);
	sort(array, MAX);
	printf("the end array:\n");
	print(array, MAX);

	return 0;
}

int sort(int array[MAX], int limit)
{
	int top, base;
	int tmp;
	for (top = 0; top < limit - 1; ++top)
	{
		for (base = top + 1; base < limit; ++base )
			if (array[base] > array[top])
			{
				tmp = array[base];
				array[base] = array[top];
				array[top] = tmp;
			}
	}
	return 0;
}

int print(int array[MAX], int limit)
{
	int i;
	for (i = 0; i < limit; ++i)
	{
		printf("%-5d", array[i]);
		if (i % 10 == 9)
			putchar('\n');
	}
	if(i % 10 != 0)
		putchar('\n');
	return 0;
}