#include<stdio.h>

typedef unsigned long long uint64;

uint64 func(uint64 x, uint64 y)
{
	uint64 t;
	for(t=~0; t; t>>=1)
	{
		if((y&t) < (y-x))
			return y|t;
	}
	return y;
}

int main()
{
	int n;
	uint64 x, y;
	scanf("%d", &n);
	while(EOF != scanf("%llu%llu", &x, &y))
	{
		printf("%llu\n", func(x, y));
	}
	return 0;
}
