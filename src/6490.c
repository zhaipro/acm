#include<stdio.h>

int main()
{
	int n, i;
	int c;
	int flag;
	const char *text = "2050";
	scanf("%d", &n);
	while(n--)
	{
		i = 0;
		flag = 0;
		while((c = getchar())!='\n')
		{
			flag |= 2;
			if(c!=text[i]) {
				flag |= 1;
			}
			i++;
			i %= 4;
		}
		if(flag==2 && i==0)
			printf("Yes\n");
		else if(flag!=0)
			printf("No\n");
		else
			n++;
	}
	return 0;
}
