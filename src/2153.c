#include<stdio.h>

void func(int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		if(i==1) {
			for(j=1; j<=n; j++)
				printf("%3d", j);
		}else if(i==n) {
			for(j=1; j<=n; j++)
				printf("%3d", 3*n-1-j);
		}else {
			printf("%3d", 4*n-2-i);
			for(j=0; j<n-2; j++)
				printf("   ");
			printf("%3d", n+i-1);	
		}
		printf("\n");
	}
}

int main()
{
	int n;
	while(EOF!=scanf("%d", &n) && n)
	{
		func(n);
	}
	return 0;
}
