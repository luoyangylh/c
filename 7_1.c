#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char *p, *t;
	p = "luoyang";
	int i;

	printf("%c\n", *p);
	printf("%c\n", *(p+1));
	printf("%c\n", *p+1);


	printf("%c\n", *(argv[0]+14));
	printf("%c\n", *(*argv+14));
	for (i = 0; *(argv[0]+i) != '\0'; i++)
	{
		putchar(tolower(*(argv[0]+i)));
		putchar(' ');
	}

	char c;
	c = getchar();
	putchar(tolower(c));
	
	
	return 0;
}