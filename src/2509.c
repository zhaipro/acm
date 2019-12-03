#include <stdio.h>


int main()
{
    int i, n, t;
    while(EOF != scanf("%d", &n))
    {
        int r = 0;
        int b = 1;
        for(i=0; i<n; i++)
        {
            scanf("%d", &t);
            if(t > 1)
                b = 0;
            r ^= t;
        }
        printf(r^b?"Yes\n":"No\n");
    }
    return 0;
}
