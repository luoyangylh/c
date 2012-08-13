#include <stdio.h>

/*count the space*/
int main(int argc, char const *argv[])
{
	int num = 0;
	int c, num_s = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else
		{
			putchar(c);
		}
		
	}
	/*
	while ((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			putchar(c);
			while ((c = getchar()) == ' ' && c != EOF)
				;
		}
		else
		{
			if (c == EOF)
				break;
		}
		putchar(c);
	}
	/*
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			num++;
		else{
			if (c == '\t')
				num_s++;
		}
	}
	printf("the number of space and tab is %d and %d\n", num, num_s);
	*/

	return 0;
}