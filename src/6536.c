#include<stdio.h>

int main()
{
	int n, y;
	int x, t, C, p, c;
	while(EOF!=scanf("%d\n", &n))
	{
		x=0;
		t=0;
		C=0;
		p=0;
		c=0;
		while(n--)
		{
			y=getchar();
			if(y=='x')
				x++;
			else if(y=='t') {
				if(t<x)
					t++;
			}else if(y=='C') {
				if(C<t)
					C++;
			}else if(y=='p') {
				if(p<C)
					p++;
			}else if(y=='c')
				if(c<p)
					c++;
		}
		printf("%d\n", c);
	}
	return 0;
}
