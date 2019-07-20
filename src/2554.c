#include<stdio.h>

int main()
{
	int n;
	while(scanf("%d", &n) && n)
	{
		if(((5*n+5)*n)%4)
			printf("N\n");
		else
			printf("Y\n");
	}
	return 0;
}
