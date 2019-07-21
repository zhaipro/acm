#include<stdio.h>

int main()
{
	int i, m, n;
	scanf("%d", &i);
	for(i=1; EOF != scanf("%d%d", &m, &n); i++)
	{
		printf("Scenario #%d:\n", i);
		if((m*n)%2)
			printf("%d.41\n\n", n*m);
		else
			printf("%d.00\n\n", n*m);
	}
	return 0;
}
