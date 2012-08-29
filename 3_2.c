#include <stdio.h>
#define MAX 100
int escape(char s[], char t[]);

int escape(char s[], char t[])
{
	int i, j;

	for ( i = 0, j = 0; t[i] != '\0'; i++)
	{
		switch(t[i])
		{
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	if (t[i] == '\0')
		s[j] = t[i];

	return 0;

}

int main(int argc, char const *argv[])
{
	char s[MAX], t[MAX] = "luoyan jong	jingejli"; //attention: can not do like this: char t[MAX]; t[MAX] = "luoyangylh";
	escape(s, t);
	printf("%s\n", t);
	printf("%s\n", s);
	return 0;
}