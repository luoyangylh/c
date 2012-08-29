#include <stdio.h>
#define MAX 10
void move (int *s, int *t);

int main(int argc, char const *argv[])
{
	int iarry[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int mid = MAX / 2;
	int i;

	for (i = 0; i < mid; ++i)
		move(&iarry[i], &iarry[i+mid]);
	for (i = 0; i < MAX; ++i)
		printf("%d\n", iarry[i]);
	return 0;
}

void move (int *s, int *t)
{
	int *temp;
	*temp = *s;
	*s = *t;
	*t = *temp;
}