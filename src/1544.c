#include<stdio.h>
#include<string.h>

int func(const char *s, int n)
{
	int i, j;
	int count = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; s[i-j]==s[i+j]; j++)
		{
			count++;
		}
		for(j=0; s[i-j]==s[i+j+1]; j++)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	char s[5000 + 2] = {1};
	while(EOF != scanf("%s", s + 1))
	{
		n = strlen(s + 1);
		n = func(s + 1, n);
		printf("%d\n", n);
	}
	return 0;
}
