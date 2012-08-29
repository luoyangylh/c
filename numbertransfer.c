//transfer the demical number to other kind such as 8| 16
#include <stdio.h>
#define MAX 100

int output[MAX];

char getFigure (int number)
{
	char c;
	if(number <= 9)
		c = '0' + number;
	else
		c = 'a' + number -10;
	return c;
}

int getNumber (int number, int base)
{
	int k = 0;

	while (number)
	{
		output[k++] = number % base;
		number = number / base;
	}
	return --k;
}

int main(int argc, char const *argv[])
{
	unsigned int number, base;
	int i, k;

	printf("please input your original number:");
	scanf("%u", &number);
	//printf("%u\n", number);
	printf("please input your base:");
	scanf("%u", &base);
	k = getNumber(number, base);
	while (k >= 0)
		printf("%c", getFigure(output[k--]));
	putchar('\n');
	return 0;
}