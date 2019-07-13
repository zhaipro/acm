#include <stdio.h>

int main()
{
    int i,n,prev,next,time;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
            break;
        prev = 0;
        time = 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&next);
            if(next-prev > 0){
                time += 6*(next-prev);
            }else{
                time += 4*(prev-next);
            }
            time += 5;
            prev = next;
        }
        printf("%d\n",time);
    }
    return 0;
}
