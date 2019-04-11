#include <stdio.h>

void _main(int i)
{
	int max=-1001,start,end;
	int j,n,t = 0;
	int sum = 0;
	int s;

	scanf("%d",&n);
	for(j=0; j<n; j++)
	{
		scanf("%d", &s);
		sum += s;
		if(sum > max){
			max = sum;
			start = t;
			end = j;
		}
		if(sum < 0){
			t = j + 1;
			sum = 0;
		}
	}
	printf("Case %d:\n%d %d %d\n", i, max, start+1, end+1);
}

int main()
{
	int i,t;
	scanf("%d",&t);
	for(i=1; i<=t; i++)
	{
		_main(i);
		if(i<t)
			printf("\n");
	}
	return 0;
}
