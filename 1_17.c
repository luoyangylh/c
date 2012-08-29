#include <stdio.h>
#define MAX 8
#define LINE 1000
int getline(char line[]);

int main(int argc, char const *argv[])
{
	int len = 0;
	int i;
	char line[LINE], pline[LINE];

	while ((len = getline(line)) > MAX)
	{
		printf("the length of this line %s is larger than MAX\n", line);
	}
	
	return 0;
}

int getline (char line[])
{
	int i, c;
	for (i = 0; (c = getchar()) != EOF && c != '\n' && c != '\0'; ++i)
		line[i] = c;
	if (c = '\n')
		line[i] = c;
	++i;
	line[i] = '\0';
	return i;
}