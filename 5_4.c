#include <stdio.h>

int strend(char *s, char *t);

int main(int argc, char const *argv[])
 {
 	char *s = "luoyangy2blh";
 	char *t = "ylh";
 	int output;
 	char *ss[1]; 
 	ss[0] = "luoyang";

 	printf("%d\n", argc);
 	printf("%s\n", *ss);
 	output = strend(s, t);
 	printf("the final output is %d\n", output);
 	return 0;
 } 

 int strend(char *s, char *t)
 {
 	while(*s)
 		s++;
 	while(*t)
 		t++;
 	if(*--s != *--t)
 		return 0;
 	else
 	{
 		for( ; *t; t--, s--)
 		{
 			if (*s != *t)
 				return 0;
 		}
 		return 1;
 	}
 }