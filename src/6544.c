#include<stdio.h>

int main()
{
	int n;
	float s=0, a;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%f", &a);
		if(s<100 || s>=400)
			s += a;
		else if(s<150)
			s += a*0.8;
		else
			s += a*0.5;
	}
	printf("%.2f\n", s);
	return 0;
}
