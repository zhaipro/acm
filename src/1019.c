#include<stdio.h>

int GCD(int a,int b)
{
	return b==0?a:GCD(b,a%b);
}

// https://zh.wikipedia.org/wiki/最小公倍数
int LCM(int a,int b)
{
	return a/GCD(a,b)*b;
}

int main()
{
	int n;
	int m;
	int a,lcm;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		scanf("%d",&lcm);
		while(--m>0)
		{
			scanf("%d",&a);
			lcm = LCM(lcm,a);
		}
		printf("%d\n",lcm);
	}
}
