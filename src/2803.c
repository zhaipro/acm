#include<stdio.h>

typedef unsigned long long u64;

int main()
{
	int i, n;
	u64 v, m, s;
	while(scanf("%d", &n) && n!=0)
	{
		m=0;
		s=0;
		for(i=0; i<n; i++)
		{
			scanf("%llu", &v);
			s += v;
			if(v>m) {
				m=v;
			}
		}
		printf("%llu\n", (2009-n)*m + s);
	}
	return 0;
}
