#include<stdio.h>

int main()
{
        int i,j,n,v,k;
        int h[50];
        for(j=0;scanf("%d", &n) && n; j++)
        {
                if(j)printf("\n");
                v=0,k=0;
                for(i=0;i<n;i++)
                {
                        scanf("%d", &h[i]);
                        v+=h[i];
                }
                v/=n;
                for(i=0;i<n;i++)
                        if(h[i]>v)
                                k+=h[i]-v;
                printf("%d\n\n", k);
        }
        return 0;
}
