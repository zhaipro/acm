#include <stdio.h>
#include <string.h>

int f(int A,int B,int n)
{
    int i;
    int g[7][7];
    int flag = 0;
    int a=1,b=1,c;
    memset(g, 0, sizeof(g));
    for(i=2;i<n;i++)
    {
        if(g[a][b] && flag==0){
            int loop = i - g[a][b];
            int rest = (n-i) % loop;
            n = i+rest;
            flag=1;
        }
        g[a][b] = i;
        c = (A*a+B*b)%7;
        b = a;
        a = c;
    }

    return a;
}

int main(int argc, char *argv[])
{
    int A,B,n;
    while(1)
    {
        scanf("%d %d %d",&A,&B,&n);
        if(A==0 && B==0 && n==0)
            break;
        printf("%d\n",f(A,B,n));
    }
    return 0;
}
