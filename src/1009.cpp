#include <stdio.h>
#include <algorithm>
using namespace std;

struct warehouse_t{
    float J;
    float F;
};

bool operator<(warehouse_t a,warehouse_t b)
{
    return a.J/a.F > b.J/b.F;
}

int main(int argc, char *argv[])
{
    while(1)
    {
        float m;
        int n;
        scanf("%f %d",&m,&n);
        if(m==-1 && n==-1)
            break;
        warehouse_t warehouse[n];
        for(int i=0;i<n;i++)
            scanf("%f %f",&warehouse[i].J,&warehouse[i].F);
        sort(warehouse,warehouse+n);
        float max_bean = 0;
        for(int i=0;i<n && m>0;i++)
        {
            if(m>warehouse[i].F){
                max_bean += warehouse[i].J;
            }else{
                max_bean += warehouse[i].J * m/warehouse[i].F;
            }
            m -= warehouse[i].F;
        }
        printf("%.3f\n",max_bean);
    }
    return 0;
}
