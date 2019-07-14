#include <stdio.h>

int main()
{
	int i;
	int n;
	float a_0, a_n1, c;
	float a_1, sum;
	while(scanf("%d",&n) != EOF)
	{
		scanf("%f%f",&a_0,&a_n1);
		sum = 0;
		for(i=0; i<n; i++) {
			scanf("%f",&c);
			sum += (n-i) * c;
		}
		a_1 = (n*a_0 + a_n1 - 2*sum) / (n+1);
		printf("%.2f\n",a_1);
	}
	return 0;
}
