// https://zh.wikipedia.org/wiki/费马小定理
// https://zh.wikipedia.org/wiki/同余
#include<stdio.h>

int main()
{
	int k, a;
	while(EOF != scanf("%d", &k))
	{
		for(a=0; a<65; a++)
		{
			if((18+k*a)%65==0) {
				printf("%d\n", a);
				break;
			}
		}
		if(a==65)
			printf("no\n");
	}
	return 0;
}
