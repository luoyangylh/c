#include <stdio.h>
#define MAX 1000
int strindex (char s[], char t[]);
int getline (char s[], int max);

int main (int argc, char const *argv[])
{
	int i, c;
	int vocation;
	char line[MAX];
	char lineobj[MAX] = "luoyang";

	while( getline(line, MAX) > 0)
	{
		vocation = strindex(line, lineobj);
		printf("the %s in %s is %d\n", lineobj, line, vocation);
	}
	return 0;
}

int getline (char s[], int max)
{
	int i = 0;
	int c;
	while ((c = getchar()) != EOF && c != '\n' && --max > 0)
		s[i++] = c; 
	if (c == '\n')
			s[i++] = '\n';
	s[i] = '\0';
	printf("%s\n", s);
	return i;
}
/*
int getline(char s[], int lim)
{
int c, i;
i = 0;
while (--lim> 0 && (c=getchar()) != EOF && c != '\n')
s[i++] = c;
if (c == '\n')
s[i++] = c;
s[i] = '\0';
return i;
}
 */

int strindex (char s[], char t[])
{
	int i, j, k, l;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		for (l = j ; s[l] != '\0'; l++)
			;
		if(k > 0 && t[k] == '\0')
			return (l-j);
	}
	return -1;
}
