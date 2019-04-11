#include <stdio.h>
#include <stdint.h>

// https://zh.wikipedia.org/wiki/等差数列
uint32_t sum(uint32_t a1, uint32_t n, uint32_t d)
{
	uint32_t an = a1 + (n - 1) * d;
	return (a1 + an) * n / 2;
}

int main()
{
	uint32_t n;
	while(EOF != scanf("%d", &n))
	{
		printf("%d\n\n", sum(1, n, 1));
	}
	return 0;
}
