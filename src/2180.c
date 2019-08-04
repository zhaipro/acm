#include<stdio.h>

int main()
{
	int a, b, s, t;
	int c;
	while(scanf("%d%d%d%d", &a, &b, &s, &t) && (a!=0 || b!=0 || s!=0 || t!=0))
	{
		b += (a%12)*60;
		t += (s%12)*60;
		if(t<b)
			t += 12*60;
		c = t*11/720 - b*11/720;
		if(b==0)
			c++;
		printf("%d\n", c);
	}
	return 0;
}
