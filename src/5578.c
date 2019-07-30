#include<stdio.h>
#include<memory.h>

int main()
{
	unsigned int i, j, t, c;
	unsigned int min, dist;
	int s[26];
	scanf("%d\n", &t);
	for(i=1; i<=t; i++)
	{
		memset(s, 0x80, sizeof(s));
		min = 10000;
		for(j=0; (c=getchar())!='\n'; j++)
		{
			dist = j - s[c-'a'];
			s[c-'a'] = j;
			if(dist<min)
				min=dist;
		}
		printf("Case #%d: %d\n", i, min==10000?-1:min);
	}
	return 0;
}
