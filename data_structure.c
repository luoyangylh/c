#include <stdio.h>

int main(void)
{
	int age;
	int age_sec;
	float height, myheight;
	float trans = 2.54;
	int num;

	printf("please input your height:\n");
	scanf("%f", &height);
	myheight = height * trans;
	printf("your height is %f %e \n", myheight, myheight);
	printf("please input your age \n");
	scanf("%d", &age);
	age_sec = age * 3.156E7;
	printf("THE SECONDS ARE: %d \n", age_sec);
	printf("%u\n", sizeof(short));
	printf("%u\n", sizeof(int));

	printf("please input a number:\n");
	scanf("%d", &num);
	printf("%c \n", num);
	return 0;

}
