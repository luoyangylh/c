#include <stdio.h>
#define MAX 100
int expand (char s1[], char s2[]);

int expand (char s1[], char s2[])
{
	int from, to;
	int i, j;
	from = s1[0];
	to = s1[2];
	j = to - from + 1;

	for (i = 0; i < j; i++, from++)
		s2[i] = from;
	return 0;
}

int main(int argc, char const *argv[])
{
	char s1[MAX];
	char s2[MAX];

	printf("please input (for example: a-z) :\n");
	scanf("%s", &s1);
	expand(s1, s2);
	printf("the %s means %s\n", s1, s2);
	return 0;
}