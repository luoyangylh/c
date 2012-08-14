#include <stdio.h>
#define MAXLINE 1000

int getline (char line[]);
void copy (char from[], char to[]);

int main(int argc, char const *argv[])
{
	int max = 0;
	int len = 0;
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; //longest line saved here

	while ((len = getline(line)) > 0)
	{
		printf("%d: %s", len, line);
		if (len > max){
			max = len;
			copy(line, longest);
		}
	}
	if (max > 0)
	{
		printf("the longest line is %d, %s\n", max, longest);
	}
	
	return 0;
}

int getline (char line[])
{
	int c, i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		/* code */
		line[i] = c;
	}
	if (c == '\n')
	{
		/* code */
		line[i] = '\n';
		++i;

	}
	line[i] = '\0';
	return i;
}

void copy(char from[], char to[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

