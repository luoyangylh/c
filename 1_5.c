#include <stdio.h>
/* copy input to output */

int main(int argc, char const *argv[])
{
	int c;
	long num = 0;
	double u;
	//c = getchar();
	//printf("EOF\n");
	printf("the value of EOF is %d\n", EOF);
	printf("Press a key. ENTER would be nice :-)\n");
  	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
	/*while ((c = getchar()) != EOF)
	{
		putchar(c);
		num++;
		//int out = (getchar() != EOF);
		//printf("%d\n", out);
		//c = getchar();
	}*/
	for (u = 0; (c = getchar()) != EOF; ++u)
	{
		if (c =='\n')
			num++;
	}
	printf("the line number is %d\n", num);
	printf("%.1f\n", u);
	return 0;
}