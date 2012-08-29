#include <stdio.h>
#define STU 4
#define CLASS 3
int main(int argc, char const *argv[])
{
	int grade[STU][CLASS] = {
		{100, 34, 98},
		{87, 66, 60},
		{12, 23, 45},
		{100, 12, 45}
	};
	int k;
	int *p;

	for (int i = 0; i < STU; ++i)
	{
		for (k = 0; k < CLASS; ++k)
		{
			if (grade[i][k] < 60)
			{
				p = grade[i];
				printf("the student %d fail the exam with the scores \n", i);
				while (p < grade[i]+3)
					printf(" %d 	", *p++);
				putchar('\n');
				break;
			}
		}
	}


	return 0;
}