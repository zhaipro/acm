#include<stdio.h>
#include<math.h>

#define PI 3.141592654

int main()
{
	int n;
	double a, b;
	while(EOF!=scanf("%d", &n))
	{
		a = cos(PI/n);
		b = sin(PI/n);
		printf("%lf\n", (n-1)*a*b+b);
		a = (n-1)*a*b+b;
	}
	return 0;
}
