#include <stdio.h>

void strcat1 (char *ss, char *tt)
{
	while (*ss++)
		;
	while (*ss++ = *tt++)
		;
}

int main()
{
	char *s1 = "luoyang";
	char *t1 = "ylh";
	strcat1 (s1, t1);
	printf("%s and %s \n", s1, t1);
	return 0;
}

