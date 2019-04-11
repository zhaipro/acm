#include <stdio.h>
#include <math.h>

// https://zh.wikipedia.org/wiki/欧几里得距离
float distance(float x1, float y1, float x2, float y2)
{
	float dx = x1-x2;
	float dy = y1-y2;
	return sqrt(dx*dx+dy*dy);
}

int main()
{
	float x1,y1,x2,y2;
	while(EOF != scanf("%f%f%f%f",&x1,&y1,&x2,&y2))
	{
		printf("%.2f\n",distance(x1,y1,x2,y2));
	}
	return 0;
}
