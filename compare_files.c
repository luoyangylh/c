#include <stdio.h>
#include <string.h>

#define MAX 100

int main(int argc, char const *argv[])
{
	char line1[MAX];
	char line2[MAX];
	FILE *file1, *file2;
	file1 = fopen(argv[1], "r");
	file2 = fopen(argv[2], "r");
	printf("we begin:\n");

	//fgets(line1, MAX, stdin); //line1为数组，已经分配了内存地址，如果是指针的话必须要初始化分配内存地址

	
	while (1) 
	{
		fgets(line1, MAX, file1);
		fgets(line2, MAX, file2);
		//printf("fgets end\n");
		if (strcmp(line1, line2) != 0)
			break;
	}
	
	printf("the first difference between two files are:\n");

	printf("%s\n", line1);
	printf("%s\n", line2);

	return 0;
}