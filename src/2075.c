#include <stdio.h>

int main()
{
    int t;
    int a,b;
    scanf("%d",&t);
    while(EOF != scanf("%d%d",&a,&b))
    {
        printf(a%b?"NO\n":"YES\n");
    } 
    return 0;
}
