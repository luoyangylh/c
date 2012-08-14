#include <stdio.h>
#define MAX 100


int main(int argc, char const *argv[])
{
	char stringa[MAX], stringb[MAX], output[MAX];
	int ia, ib, io = 0;
	int i, u, state;
	int ca, cb;
	int n = 255;
	printf("%d\n", n & 1);

	for(ia = 0; (ca = getchar()) != EOF && ca != '\n'; ia++)
		stringa[ia] = ca;
	for(ib = 0; (cb = getchar()) != EOF && cb != '\n'; ++ib)
	{
		stringb[ib] = cb;
	}

	for (i = 0; i <= ia; ++i)
	{
		state = 0;
		for (u = 0; u <= ib; ++u)
		{
			if (stringa[i] == stringb[u])
			{
				state = 1;
				break;
			}
		}
		if (!state)
		{
			output[io] = stringa[i];
			io++;
		}

	}
	printf("%s\n", output);

	return 0;
}