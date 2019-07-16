#include<stdio.h>

int main()
{
	int i, j, n, h;
	char c;
	scanf("%d", &n);
	while(n--)
	{
		getchar();
		scanf("%c%d", &c, &h);

		for(i=0; i<h/6+1; i++)
			printf(" ");
		for(i=0; i<(h-3+1)/2; i++)
			printf("%c", c);
		printf("\n");

		for(i=0; i<(h-3)/2; i++)
		{
			for(j=0; j<h/6+1; j++)
				printf("%c", c);
			for(j=0; j<(h-3+1)/2; j++)
				printf(" ");
			for(j=0; j<h/6+1; j++)
				printf("%c", c);
			printf("\n");
		}

		for(i=0; i<h/6+1; i++)
			printf(" ");
		for(i=0; i<(h-3+1)/2; i++)
			printf("%c", c);
		printf("\n");
		
		for(i=0; i<(h-3+1)/2; i++)
		{
			for(j=0; j<h/6+1; j++)
				printf("%c", c);
			for(j=0; j<(h-3+1)/2; j++)
				printf(" ");
			for(j=0; j<h/6+1; j++)
				printf("%c", c);
			printf("\n");
		}

		for(i=0; i<h/6+1; i++)
			printf(" ");
		for(i=0; i<(h-3+1)/2; i++)
			printf("%c", c);
		printf("\n");
		
		if(n)
			printf("\n");
	}
	return 0;
}
