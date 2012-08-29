#include <stdio.h>
#define MAX 1000

int main(int argc, char const *argv[])
{
	FILE *pf;
	char line[MAX];
	int i = 1;
	int line_num = 0;

	if (argc <= 1)
		printf("please input your files\n");
	else
	while (--argc >= 1)
	{
		pf = fopen(argv[i], "r");
		putchar('\n');
		printf("***************%s*************\n", argv[i]);
		while (fgets(line, MAX, pf) != NULL)
		{
			printf("%s\n", line);
			line_num++;
		}
		printf("\n");
		printf("total %d lines\n", line_num);
		printf("\n");
		line_num = 0;
		i++;
	}
	return 0;
}