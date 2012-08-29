#include <stdio.h>
int setbits (int x, p, n, y)

int main(int argc, char const *argv[])
{
	int input, output;
	int p, n;
	printf("please input your number:\n");
	scanf("%d %d %d", &input, &p, &n);
	setbits(input, p, n, output);
	printf("the output number is : %d \n", output);
	/* code */
	return 0;
}

int setbits (int x, p, n, y)
{
	int xleft, xright, yleft, yright;
	xleft = x & 

}