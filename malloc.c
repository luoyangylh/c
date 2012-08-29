#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int gobble (char *p, int n);

int main(int argc, char const *argv[])
{
	char *p;
	int output = gobble(p, MAX);
	printf("there are %d numbers\n", output);
	return 0;
}

int gobble (char *p, int n)
{
	p = (char *) malloc (MAX * sizeof (char));
	int i = 0;
	for (;i < MAX; i++)
	{
		p[i] = i;
		printf("%d\t", p[i]);
		if (i % 10 == 0)
			putchar('\n');
	}
	printf("\n%d\n", p);
	free(p);
	puts("\n");
	printf("\n%d\n", p);
	printf("after free %d\n", p[1]);
	return i;
}