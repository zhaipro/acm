;
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
