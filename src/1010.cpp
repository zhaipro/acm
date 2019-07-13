#include <stdio.h>
#include <iostream>


using namespace std;

int n,m,t;
char map[7][7];

void dfs(int x,int y)
{
    if(t == 0){                    // 时间到了，不再继续深入 
        if(map[x][y] == 'D')    // wow，我们到出口了 
            throw 1;
    }else if(map[x][y] == '.'){    // 恩可以访问 
        map[x][y] = 'g';        // 把颜色涂成灰色 
        t--;
        if(y>0)
            dfs(x,y-1);
        if(y+1<m)
            dfs(x,y+1);
        if(x>0)
            dfs(x-1,y);
        if(x+1<n)
            dfs(x+1,y);
        t++;
        map[x][y] = '.';
    }
}

int main()
{
    int i,j,si,sj,ei,ej,dist;
    while(EOF!=scanf("%d %d %d",&n,&m,&t) && n!=0)
    {
        for(i=0;i<n;i++)
        {
            getchar();
            for(j=0;j<m;j++)
            {
                cin>>map[i][j];
                if(map[i][j] == 'S'){
                    si = i; sj = j;
                }else if(map[i][j] == 'D'){
                    ei = i; ej = j;
                }
            }
        }
        dist = ei-si+ej-sj;
        if(dist<0)
            dist = -dist;
        if((dist&1) == (t&1)){
            map[si][sj] = '.';
            try{
              dfs(si,sj);
              printf("NO\n");
            }catch(int a){
              printf("YES\n");
            }
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
