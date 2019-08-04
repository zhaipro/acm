#include<stdio.h> 

int main()
{
	int a, b, s, t;
	int c;
	while(scanf("%d%d%d%d", &a, &b, &s, &t) && (a!=0 || b!=0 || s!=0 || t!=0))
	{
		a %= 12;
		s %= 12;
		c = 360 - ((a*60+b)/2 - b*6 + 360) % 360;
		c += (((s*60+t) - (a*60+b) + 12*60)%(12*60)) * 5.5;
		printf("%d\n", c/360);
	}
	return 0;
}
